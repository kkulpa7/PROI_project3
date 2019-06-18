#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include <iostream>

#include "Student.hpp"
#include "Teacher.hpp"

template <typename T>
class Subject{
    private:
        std::string language;
        std::vector<Student> students;
        Teacher teacher;
        T amount;
    public:
        Subject();
        void setLanguage(std::string);
        void addStudent();
        void setTeacher();
        void getLanguage();
        void getStudents();
        void getTeacher();
        void increase();
        T getAmount();
};

template <typename T>
Subject<T>::Subject(){
    this->amount = 0;
}

template <typename T>
void Subject<T>::setLanguage(std::string language){
    this->language = language;
}

template <typename T>
void Subject<T>::getLanguage(){
    std::cout<<this->language;
}

template <typename T>
T Subject<T>::getAmount(){
    return this->amount;
}

template <typename T>
void Subject<T>::setTeacher(){
    this->teacher.setTeacher();
}

template <typename T>
void Subject<T>::addStudent(){
    Student stud;
    stud.setStudent();
    this->students.push_back(stud);
    ++this->amount;
}

template <typename T>
void Subject<T>::getStudents(){
    std::cout<<"\nSTUDENTS\n";
    for(std::vector<Student>::iterator it=this->students.begin(); it!=students.end(); ++it){
        (*it).get();
        std::cout<<std::endl<<std::endl;
    }
}

template <typename T>
void Subject<T>::getTeacher(){
    Person* t;
    t = &(this->teacher);
    (*t).get();
}

template <typename T>
void Subject<T>::increase(){
    for(std::vector<Student>::iterator it=this->students.begin(); it!=students.end(); ++it){
        ++(*it);
    }
}

#endif
