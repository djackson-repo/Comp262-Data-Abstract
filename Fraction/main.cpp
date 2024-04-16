#include <iostream>
using namespace std;

class Fraction
{
    int num, denom;
public:
    Fraction(int numerator, int denominator)
    {
        num = numerator;
        denom = denominator;
    };
    Fraction multiply(Fraction f)
    {
        int newNum = this->num * f.num;
        int newDenom = this->denom * f.denom;
        Fraction f3 = Fraction(newNum, newDenom);
        return f3;
    };
    friend ostream & operator << (ostream & out, const Fraction&f)
    {
        out << f.num << "/" << f.denom;
        return out;
    }

};

int main()
{
    Fraction f1 = Fraction(1,2);
    Fraction f2 = Fraction(3,4);
    Fraction f3 = f1.multiply(f2);
    cout << f1 << endl;
    cout << f2 << endl;
    cout << f3 << endl;

}
