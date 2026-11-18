#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of shape" << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle: " << 3.14159 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void area() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    void area() override {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};

int main() {
    Shape* shape;

    Circle circle(5);
    Rectangle rectangle(10, 4);
    Triangle triangle(6, 8);

    shape = &circle;
    shape->area();

    shape = &rectangle;
    shape->area();

    shape = &triangle;
    shape->area();

    return 0;
}
