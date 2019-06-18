#ifndef TEACHER_HPP
#define TEACHER_HPP

#include <string>

#include "Person.hpp"

class Teacher: public Person{
    private:
        std::string *academicDegree;
        void setAcademicDegree(std::string);
    public:
        Teacher(): Person() {}
        ~Teacher();
        void setTeacher();
        void get(std::ostream& output=std::cout);
};

#endif

