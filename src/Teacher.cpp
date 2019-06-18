#include <iostream>

#include "Teacher.hpp"
#include "functions.hpp"

using namespace std;

void Teacher::setAcademicDegree(string academicDegree){
    this->academicDegree = new string;
    *(this->academicDegree) = academicDegree;
}

void Teacher::setTeacher(){
    try{
        Person::setPerson();
    }
    catch(const invalid_argument& exc){
        cout<<exc.what()<<endl;
        bool correct = false;
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
                cout<<"Try again.\n";
            }
        }
    }
    string academicDegree;
    cout<<"Academic degree: ";
    cin>>academicDegree;
    setAcademicDegree(academicDegree);
}

void Teacher::get(ostream& output){
    output<<"TEACHER:\n";
    output<<*(this->academicDegree)<<" ";
    Person::get();
}

Teacher::~Teacher(){
    delete this->academicDegree;
}
