#include <iostream>
using namespace std;
class Bank {
public:
    virtual void interest() {
        cout << "Base Bank Interest" << endl;
    }
};
class SavingsAccount : public Bank {
public:
    void interest() override {
        cout << "Savings Account Interest: 5%" << endl;
    }
};
class CurrentAccount : public Bank {
public:
    void interest() override {
        cout << "Current Account Interest: 2%" << endl;
    }
};
int main() {
    Bank* b;

    SavingsAccount s;
    CurrentAccount c;

    b = &s;
    b->interest();

    b = &c;
    b->interest();

    return 0;
}
