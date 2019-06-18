#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

#include "Person.hpp"

class Student: public Person{
    private:
        std::string PESEL;
        int IQ;
        void setPESEL(std::string);
        void setIQ(int);
    public:
        Student(): Person() {}
        void setStudent();
        void get();
        void operator++();
};

#endif
