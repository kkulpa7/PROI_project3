#include <iostream>

#include "Student.hpp"
#include "functions.hpp"

using namespace std;

void Student::setPESEL(string PESEL){
    this->PESEL=PESEL;
}

void Student::setIQ(int IQ){
    this->IQ=IQ;
}

void Student::setStudent(){
    bool correct = false;
    try{
        Person::setPerson();
    }
    catch(const invalid_argument& exc){
        cout<<exc.what()<<endl;
        int age;
        while (!correct){
            cin>>age;
            if (cin.good()){
                correct = true;
                Person::setAge(age);
            }
            else{
                correct = false;
                clearBuffer();
                cout<<"Try again!\n";
            }
        }
    }

    string PESEL;
    cout<<"PESEL: ";
    cin>>PESEL;
    setPESEL(PESEL);

    int IQ;
    correct = false;
    cout<<"IQ: ";
    while(!correct){
        cin>>IQ;
        if (cin.good()){
            correct = true;
            setIQ(IQ);
        }
        else{
            clearBuffer();
            cout<<"WRONG DATA! Not a number.\nTry again!\n";
        }
    }
}

void Student::get(){
    Person::get();
    cout<<"PESEL: "<<this->PESEL;
    cout<<"\nIQ: "<<this->IQ;
}

void Student::operator++(){
    this->IQ=this->IQ+1;
}

