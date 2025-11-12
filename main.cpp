#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
#include <string>
using namespace std;

Animal::Animal(){}
Animal::Animal(string name, int age, bool isHungry){
    this->name=name;
    this->age=age;
    this->isHungry=isHungry;
}

Animal::~Animal(){}
void Animal::display(){
    cout<<getName()<<"(Age: "<<getAge()<<", "<<feed()<<")";
}

void Animal::feed(){
    return isHungry;
}

void Animal::getName(){
    return name;
}

void Animal::getAge(){
    return age;
}


Mammal::Mammal(){}
Mammal::Mammal(string name, int age, bool isHungry,string furColor):Animal(name,age,isHungry){
    this->furColor=furColor;
}

Mammal::~Mammal(){}


Bird::Bird(){}
Bird::Bird(string name, int age, bool isHungry,float wingSpan):Animal(name,age,isHungry){
    this->wingSpan=wingSpan;
}
Bird::~Bird(){}



Reptile::Reptile(){}
Reptile::Reptile(string name, int age,bool isVenomous, bool isHungry,bool isVenomous):Animal(name,age,isHungry){
    this->isVenomous=isVenomous;
}
Reptile::~Reptile(){}


Enclosure::Enclosure(){
    animal=nullptr;
    currentCount=0;
}

Enclosure::Enclosure(int capacity){
    this->animal=nullptr;
    this->currentCount=0;
    this->capacity=capacity;
}

Enclosure::~Enclosure(){
    delete[]animal;
}


void Enclosure::addAnimal(Animal* a){
    if(currentcount==capacity)cout<<"Error, max reached";
    if(animal=nullptr){
        Animal* animals= new Animal();
        animals[animal]=a;
        currentcount++;
    }
}

void Enclosure::displayAnimals(){
    for(int i=0; i<currentCount; i++){
        cout<<animal[i].display();
    }
}


Visitor::Visitor(){}
Visitor::Visitor(string vmane, int ticketsBought){
    this->vname=vname;
    this->ticketsBought=ticketsBought;
}

Visitor::~Visior(){}

string Visitor::getVisitorName(){
    return vname;
}

int Visitor::getTicketsBought(){
    return ticketsBought;
}

void Visitor::displayInfo(){
    cout<<"Name: "<<getVisitorName<<endl;
    cout<<"Tickets Bought: "<<getTicketsBought<<endl;
}


int main()
{
    std::cout<<"Hello World";

    return 0;
}
