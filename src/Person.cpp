#include <iostream>

#include "../include/Person.hpp"

using namespace std;

Person::Person(){
	//do nothing
}

void Person::setPerson(istream& input, ostream& output){
	string a;
	int b;
	output<<"Name: ";
    input>>a;
    setName(a);
    output<<"Surname: ";
    input>>a;
    setSurname(a);
    output<<"Age: ";
    input>>b;
    if (input.good())
        setAge(b);
    else
    	throw invalid_argument("WRONG DATA! Not a number.");
}

void Person::get(ostream& output){
	output<<this->name<<" "<< this->surname<<" "<<this->age<<endl;
}

void Person::setName(string name){
	this->name = name;
}

void Person::setSurname(string surname){
	this->surname = surname;
}

void Person::setAge(int age){
	this->age = age;
}

