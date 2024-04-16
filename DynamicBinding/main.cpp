#include <iostream>
#include "Person.h"
#include "Athlete.h"

using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    Athlete a = Athlete("Dylan");
    cout << a << endl;
    shared_ptr<Person> sp = make_shared<Person>(a);
    cout << *sp;


    return 0;
}
