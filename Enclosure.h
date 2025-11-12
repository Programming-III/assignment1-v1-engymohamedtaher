#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include<iostream>
#include<string>
using namespace std;

class Enclosure{
    private:
        Animal* animal;
        int capacity;
        int currentCount;
    public:
        Enclosure();
        Enclosure(int capacity);
        ~Enclosure();
        void addAnimal(Animal* a);
        void displayAnimals();
};
#endif
