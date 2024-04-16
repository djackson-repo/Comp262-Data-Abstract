//
// Created by djackson on 9/17/2021.
//

#ifndef PERSONTEST_STUDENT_H
#define PERSONTEST_STUDENT_H
#include "Person.h"

class Student : public  Person {
    int id;
    string major;
    string expectedGraduationDate;
public:
    Student(string studentName, string dob, int id, string major, string expectedGraduationDate) : Person(studentName, dob)
    {
        this->id = id;
        this->major = major;
        this->expectedGraduationDate = expectedGraduationDate;
    }

    virtual ostream & output(ostream& out) const override
    {
        this->Person::output(out);
        out << this->id << " " << this->major << " " << this->expectedGraduationDate << " ";

        return out;
    }

};


#endif //PERSONTEST_STUDENT_H
