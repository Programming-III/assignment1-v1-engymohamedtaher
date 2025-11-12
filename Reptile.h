#ifndef REPTILE_H
#define REPTILE_H
#include<iostream>
#include<string>
using namespace std;

class Reptile: public Animal{
    private:
        bool isVenomous;
    public:
        Reptile();
        Reptile(string name, int age,bool isVenomous, bool isHungry,bool isVenomous);
        ~Reptile();
};
#endif
