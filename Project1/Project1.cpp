#include <iostream>
#include "clsQueueLine.h"
using namespace std;




int main()
{
   
    clsQueueLine payBillsQueue("A0", 10);

    payBillsQueue.issueTicket();
    payBillsQueue.issueTicket();
    payBillsQueue.issueTicket();
    payBillsQueue.issueTicket();
    payBillsQueue.issueTicket();

    payBillsQueue.printInfo();

    payBillsQueue.printAllTickets();
    system("pause>0");

    return 0;
   

}

