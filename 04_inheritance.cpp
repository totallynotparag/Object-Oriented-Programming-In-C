#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person() {
        name = "Unknown";
        age = 0;
    }

    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    int rollNumber;

public:
    Student() : Person(), rollNumber(0) {}

    Student(string n, int a, int roll) : Person(n, a) {
        rollNumber = roll;
    }

    void displayStudent() const {
        displayPerson();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class GraduateStudent : public Student {
private:
    string specialization;

public:
    GraduateStudent(string n, int a, int roll, string spec)
        : Student(n, a, roll) {
        specialization = spec;
    }

    void displayGraduateStudent() const {
        displayStudent();
        cout << "Specialization: " << specialization << endl;
    }
};

int main() {
    GraduateStudent student("Aman", 21, 101, "Artificial Intelligence");

    cout << "Graduate Student Details" << endl;
    student.displayGraduateStudent();

    return 0;
}
