#include <iostream>
#include <utility>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called" << endl;
    }

    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called" << endl;
    }

    Student(const Student& other) {
        name = other.name;
        age = other.age;
        cout << "Copy constructor called" << endl;
    }

    Student(Student&& other) noexcept {
        name = move(other.name);
        age = other.age;
        cout << "Move constructor called" << endl;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    Student s2("Aman", 21);
    Student s3 = s2;
    Student s4 = move(s2);

    cout << "\nStudent details:" << endl;
    s1.display();
    s3.display();
    s4.display();

    return 0;
}
