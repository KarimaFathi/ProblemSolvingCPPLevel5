#pragma once
#include<iostream>
#include<queue>
#include<string>
#include"clsDate.h"
using namespace std;

class clsQueueLine
{
private:
	string _code;
	int _timePerService;
	int _totalTickets = 0;


	struct stTicket {
		string prefix;
		string date;
		int waitingClients = 0;
		int serveTimeIn = 0;
		void print() {
			   cout << "\t\t\t\t_____________________________________\n\n";
				cout << "\t\t\t\t\t\t " << prefix << "\n\n";
				cout << "\t\t\t\t\t " << date << "\n";
				cout << "\t\t\t\t\t Waiting clients : " << waitingClients << "\n";
				cout << "\t\t\t\t\t  Serve Time In  \n";
				cout << "\t\t\t\t\t    " << serveTimeIn << " minutes." << endl;
				cout << "\t\t\t\t_____________________________________\n\n";
		}

	};



public:

	clsQueueLine(string code, int timePerService) {
		_code = code;
		_timePerService = timePerService;
	}

	void setCode(string code) {
		_code = code;
	}

	string getCode() {
		return _code;
	}

	__declspec(property(get = getCode, put = setCode)) string code;

	void setTimePerService(int time) {
		_timePerService = time;
	}

	int getTimePerService() {
		return _timePerService;
	}

	__declspec(property(get = getTimePerService, put = setTimePerService)) int timePerService;


	queue <stTicket> qIssuedTickets;

	void issueTicket() {
		stTicket ticket;

		ticket.prefix = getCode() + to_string(qIssuedTickets.size() + 1);
		ticket.date = clsDate::getCurrentDateTimeString();
		ticket.waitingClients = qIssuedTickets.size();
		ticket.serveTimeIn = _timePerService * qIssuedTickets.size();

		qIssuedTickets.push(ticket);
		_totalTickets++;
	}

	bool serveNextClient()
	{
		if (qIssuedTickets.empty())
			return false;


		qIssuedTickets.pop();

		return true;

	}

	int servedTickets() {
		return _totalTickets - qIssuedTickets.size();
	}

	void printInfo() {
		cout << "\n\t\t\t\t_____________________________________\n\n";
		cout << "\t\t\t\t\t  Queue Info\n";
		cout << "\t\t\t\t_____________________________________\n\n";
		cout << "\t\t\t\t    Queue prefix      : " << code << endl;
		cout << "\t\t\t\t    Total tickets     : " << qIssuedTickets.size() << endl;
		cout << "\t\t\t\t    Served clients    : " << servedTickets() << endl;
		cout << "\t\t\t\t    Waiting clients   : " << qIssuedTickets.size() << endl;
		cout << "\n\t\t\t\t_____________________________________\n";

	}



	void printTicketsLineRTL() {
		int counter = 0;
		if (qIssuedTickets.empty()) {
			cout << "\n\t\t No Tickets\n";
		}
		cout << "\n\t\tTickets : ";
		while (counter < qIssuedTickets.size()) {
			cout << code << to_string((counter + 1)) << "  <--  ";
			counter++;
		}
	}

	void printTicketsLineLTR() {
		int counter = qIssuedTickets.size();
		if (qIssuedTickets.empty()) {
			cout << "\n\t\t No Tickets\n";
		}
		cout << "\n\t\tTickets : ";
		while (counter > 0) {
			cout << code << to_string((counter)) << "  -->  ";
			counter--;
		}
	}

	void printAllTickets() {
		queue <stTicket> qTempTickets = qIssuedTickets;

		if (qTempTickets.empty()) {
			cout << "\n\n\t\t\t     ---No Tickets---\n";
		}
		else {
		cout << "\n\n\t\t\t\t\t    ---Tickets---\n";
		cout << "\t\t\t\t_____________________________________\n\n";
		while (!qTempTickets.empty()) {
			qTempTickets.front().print();
			qTempTickets.pop();
		}
		}

	}

};

