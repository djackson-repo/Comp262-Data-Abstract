//
// Created by djackson on 11/2/2021.
//

#ifndef DYNAMICBINDING_PERSON_H
#define DYNAMICBINDING_PERSON_H
#include<iostream>
#include<memory>
#include <string>
using namespace std;
class Person {
    string name;
public:
    Person(string name)
    {
        this->name = name;
    }
    friend ostream & operator << (ostream &out, const Person & p)
    {
        p.output(out);
        return out;
    }
    virtual ostream & output(ostream &out) const
    {
        out << "Person out " << this->name << " ";
        return out;
    }

};


#endif //DYNAMICBINDING_PERSON_H
