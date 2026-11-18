#include <iostream>
#include <exception>
using namespace std;

class InsufficientBalance : public exception {
public:
    const char* what() const noexcept override {
        return "Insufficient balance!";
    }
};

int main() {
    int balance = 5000, amount = 6000;

    try {
        if (amount > balance)
            throw InsufficientBalance();

        balance -= amount;
        cout << "Transaction successful";
    }
    catch (InsufficientBalance &e) {
        cout << e.what();
    }

    return 0;
}
