//
// Created by djackson on 9/17/2021.
//

#ifndef PERSONTEST_PERSON_H
#define PERSONTEST_PERSON_H
#include <string>
#include<iostream>
using namespace std;

class Person {
    string name;
    string dob;
public:
    Person(string name, string dob) // : name(name) equivalent to this->name = name
    {
        this->name = name;
        this->dob = dob;
    }
    friend ostream & operator << (ostream &out, const Person &p)
    {
        p.output(out);
        return out;
    }
    virtual ostream & output(ostream& out) const
    {
        out << this->name << " " << this->dob << " ";
        return out;
    }
};


#endif //PERSONTEST_PERSON_H
