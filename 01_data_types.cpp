#include <iostream>
using namespace std;

int main() {
    int age = 21;
    float height = 169.5f;
    double marks = 91.75;
    char grade = 'A';
    bool passed = true;
    const double PI = 3.14159;

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nAge: " << age << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << boolalpha << passed << endl;

    int a = 10, b = 5;
    cout << "\nArithmetic Operators:" << endl;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % b << endl;
    cout << "Value of PI: " << PI << endl;

    return 0;
}
