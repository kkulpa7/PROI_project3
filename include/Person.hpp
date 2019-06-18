#ifndef PERSON_HPP
#define PERSON_HPP

#include<iostream>

class Person{
    private:
        std::string name;
        std::string surname;
        int age;
        void setName(std::string);
        void setSurname(std::string);
    public:
        Person();
        virtual ~Person() {};
        void setAge(int);
        void setPerson(std::istream& input=std::cin, std::ostream& output=std::cout);
        virtual void get(std::ostream& output=std::cout);
};

#endif
