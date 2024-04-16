#include <iostream>
#include <vector>
#include <iterator>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "StreamUtil.h"

using namespace std;


int main() {
        Person p = Person("Dylan", "05 31 2002");
        Student s = Student("Jack", "12 21 2001" , 123, "123", "123");
        Instructor i = Instructor("Dan","Unknown", 10000);
        cout << "p: " << p << endl; // prints because it overrides the output stream and
        cout << "s: " << s << endl; // obtains the instance variables to print a
        cout << "i: " << i << endl; // preset set of those variables
        vector<Person> nums_v;
        nums_v.push_back(p);
        nums_v.push_back(s);
        cout << "nums_v: " <<nums_v << endl;
        // this works because it obtains all members in the vector separately and prints them
        // individually with a ", " to separate them
        Person & p_ref = s;
        cout << "p_ref: " <<p_ref << endl;
        p_ref = i;
        cout << "p_ref2: " <<p_ref << endl;
        // The output method used is its own method from its own class but because of its subclass
        // nature it uses the output method of the parent class and allows it to print all of its variables
        return 0;
}
