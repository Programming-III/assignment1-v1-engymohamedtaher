#ifndef VISITOR_H
#define VISITOR_H
#include<iostream>
#include<string>
using namespace std;

class Visitor{
    private:
        string vname;
        int ticketsBought;
    public:
        Visitor();
        Visitor(string vmane, int ticketsBought);
        ~Visior();
        void displayInfo();
        string getVisitorName();
        int getTicketsBought();
        
};
#endif
