#include <iostream>
using namespace std;

class Complex
{

private:
    double realNumber, imaginaryNumber;

public:
    Complex(double realNumber = 0.0, double imaginaryNumber = 0.0)
    {
        this->realNumber = realNumber;
        this->imaginaryNumber = imaginaryNumber;
    }

    Complex operator+(const Complex &c)
    {
        return Complex(realNumber + c.realNumber, imaginaryNumber + c.imaginaryNumber);
    }

    Complex operator*(const Complex &c)
    {
        return Complex(realNumber * c.realNumber - imaginaryNumber * c.imaginaryNumber, realNumber * c.imaginaryNumber + imaginaryNumber * c.realNumber);
    }

    friend ostream &operator<<(ostream &os, const Complex &c)
    {
        os << c.realNumber << " + " << c.imaginaryNumber << "i";
        return os;
    }

    friend istream &operator>>(istream &is, Complex &c)
    {
        is >> c.realNumber >> c.imaginaryNumber;
        return is;
    }
};

int main()
{
    Complex c1(2.0, 3.0);
    Complex c2(4.0, 5.0);

    Complex c3 = c1 + c2;
    Complex c4 = c1 * c2;

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c1 + c2 = " << c3 << endl;
    cout << "c1 * c2 = " << c4 << endl;

    return 0;
}