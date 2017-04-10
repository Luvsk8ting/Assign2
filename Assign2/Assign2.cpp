// Assign2.cpp : Write a program  that collects input to track technical support 
//tickets for issues called into a help center.
//The end user should be allowed to enter up to 100 tickets
//For each ticket the following information is collected from the user :

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Ticket
{
private:
	static int ID;
	string name;
	string issueTyp;
	string description;
	string priority;
	string issueStat;
	int impUsers;
public:
	char ans;
	string CaptureTicket(string, string, string, string, int);
	static int IDGenerator;


	string Ticket::CaptureTicket(string, string, string, string, int)
	{
		cout << "open new ticket?  Enter 'Y' to continue" << endl;
		cin >> ans;
		cout << "What is the name of the caller " << endl;
		gets_s(name);
		cout << "issue type" << endl;
		cin >> issueTyp;
		cout << "Description of issue" << endl;
		gets_s(description);
		cout << "How many users impacted" << endl;
		cin >> impUsers;
		cout << "Your user ID is " << "" << endl;
		string issueStat = "Open";

		cin.clear();
		cin.ignore();
		return string();
	}

	string Ticket::getPriority(int impUsers)
	{
		string priority;

		if (impUsers < 10)
			string priority = "LOW";
		else 
		if (impUsers >= 10 && impUsers < 50)
			string priority = "Medium";
		else 
		if (impUsers >= 50)
		    string priority = "High";

	    return priority;
}


void Ticket::ShowTicket()
{
	//After capturing the ticket, a unique ID is generated , assigned to the ticket and returned to the user so that I can be provided to the caller

}
void Ticket::CloseTicket()
{
	string issueStat = "Closed";
}
//A constructor – a unique ID should be assigned as part of the object’s creation

string Ticket::getCategory(string cat)
{
	if (cat == "server")
		cout << "server" << endl;
	else
		if (cat == "application")
			cout << "application " << endl;
		else
			if (cat == "access")
				cout << "access" << endl;
			else
				cout << "You have entered an invalid value" << endl;
	return cat;
}
int Ticket::genID()
{
	Ticket::Something();
	int genID();
	return ID;
}
int Ticket::IDGenerator = 1;

int Ticket::Something()
{
	ID = IDGenerator++;
}

int main()
{
//Once the end-user is finished, the number of tickets captured is displayed and the array of objects is iterated,  showing each to the user.
	//After presenting the array of tickets the first ticket object collected should be closed by calling CloseTicket method and that object displayed to the user
	//The end-user should be allowed to continue to enter tickets  (up to 100)  until they select to quit
//After quit option is selected, the total count of the tickets collected should be presented, followed by a listing of all tickets
	//Listing contains
	//	ID, caller’s name, issue type, status, ticket description, priority, number of users impacted

		//Something a;

		//cout << a.getID() << endl;


	string tickets[100];
	//string Ticket::myTickets[100];

		//Something first;
		//Something second;

		//second.getID();
		//cout << first.getID();
		//cout << second.getID();


	//for (int i = 0; i < tickets->size; i++)
	//{
	//	tickets[i].displayEmployee();
	//}

	//return 0;
}
	};
	
	
