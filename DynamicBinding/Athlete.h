//
// Created by djackson on 11/2/2021.
//

#ifndef DYNAMICBINDING_ATHLETE_H
#define DYNAMICBINDING_ATHLETE_H
#include <iostream>
#include <memory>
#include <vector>
#include "Person.h"

class Contract;
using namespace std;
class Athlete :public Person{

public:
    Athlete(string name) : Person(name)
    {
    }
    virtual ostream &output(ostream &out) const override
    {
        this->Person::output(out);
        out << "Athlete Out ";

    }
};


#endif //DYNAMICBINDING_ATHLETE_H
