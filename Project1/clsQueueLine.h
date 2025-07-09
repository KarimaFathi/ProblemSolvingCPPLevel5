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

		stTicket(string Prefix, string Date, int Waiting, int ServeIn)
			: prefix(Prefix), date(Date), waitingClients(Waiting), serveTimeIn(ServeIn) {}

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


	queue <stTicket> queueLine;

	void issueTicket() {

		stTicket ticket(
			getCode() + to_string(queueLine.size() + 1),
			clsDate::getCurrentDateTimeString(),
			queueLine.size(),
			_timePerService * queueLine.size()
		);

		queueLine.push(ticket);
		_totalTickets++;
	}

	bool serveNextClient()
	{
		if (queueLine.empty())
			return false;


		queueLine.pop();

		return true;

	}

	int servedTickets() {
		return _totalTickets - queueLine.size();
	}

	void printInfo() {
		cout << "\n\t\t\t\t_____________________________________\n\n";
		cout << "\t\t\t\t\t  Queue Info\n";
		cout << "\t\t\t\t_____________________________________\n\n";
		cout << "\t\t\t\t    Queue prefix      : " << code << endl;
		cout << "\t\t\t\t    Total tickets     : " << queueLine.size() << endl;
		cout << "\t\t\t\t    Served clients    : " << servedTickets() << endl;
		cout << "\t\t\t\t    Waiting clients   : " << queueLine.size() << endl;
		cout << "\n\t\t\t\t_____________________________________\n";

	}



	void printAllTickets() {
		queue <stTicket> qTempTickets = queueLine;

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

