#ifndef MAMMAL_H
#define MAMMAL_H
#include<iostream>
#include<string>
using namespace std;

class Mammal: public Animal{
    private:
        string furColor;
    public:
        Mammal();
        Mammal(string name, int age, bool isHungry, string furcolor);
        ~Mammal();
};
#endif
