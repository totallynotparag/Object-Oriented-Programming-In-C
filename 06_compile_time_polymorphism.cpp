#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i" << endl;
        else
            cout << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1 + c2;

    cout << "Integer addition: " << c3.add(10, 20) << endl;
    cout << "Double addition: " << c3.add(10.5, 20.5) << endl;

    cout << "Complex number 1: ";
    c1.display();

    cout << "Complex number 2: ";
    c2.display();

    cout << "Result after operator overloading: ";
    c3.display();

    return 0;
}
