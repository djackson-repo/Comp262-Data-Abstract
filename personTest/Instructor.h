//
// Created by djackson on 9/22/2021.
//

#ifndef PERSONTEST_INSTRUCTOR_H
#define PERSONTEST_INSTRUCTOR_H
#include "Person.h"

class Instructor : public  Person{
    double salary;

public:
    Instructor(string instructorName, string dob, double salary) : Person(instructorName, dob)
    {
    this->salary = salary;
    }
    virtual ostream & output(ostream& out) const override
    {
        this->Person::output(out);
        out << this->salary << " ";

        return out;
    }

};


#endif //PERSONTEST_INSTRUCTOR_H
