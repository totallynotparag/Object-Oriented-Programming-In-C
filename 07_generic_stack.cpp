#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack {
    T arr[5];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(T value) {
        if (top == 4)
            cout << "Stack Overflow\n";
        else
            arr[++top] = value;
    }

    void pop() {
        if (top == -1)
            cout << "Stack Underflow\n";
        else
            top--;
    }

    void display() {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack<int> S1;
    S1.push(10);
    S1.push(20);
    cout << "Integer Stack: ";
    S1.display();

    Stack<float> S2;
    S2.push(2.5f);
    S2.push(4.5f);
    cout << "Float Stack: ";
    S2.display();

    Stack<string> S3;
    S3.push("Hello");
    S3.push("World");
    cout << "String Stack: ";
    S3.display();

    return 0;
}
