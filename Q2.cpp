#include <iostream>
using namespace std;
class Staff {
public:
    virtual double calculateSalary() = 0;
};
class Contractor : public Staff {
    int hours;
    double rate;
public:
    Contractor(int h, double r) : hours(h), rate(r) {}

    double calculateSalary() override {
        return hours * rate;
    }
};
class FullTimeEmployee : public Staff {
    double baseSalary, bonus;
public:
    FullTimeEmployee(double b, double bo) : baseSalary(b), bonus(bo) {}

    double calculateSalary() override {
        return baseSalary + bonus;
    }
};
int main() {
    Staff* staffList[2];
    staffList[0] = new Contractor(40, 500);
    staffList[1] = new FullTimeEmployee(50000, 10000);
    for (int i = 0; i < 2; i++) {
        cout << "Salary: " << staffList[i]->calculateSalary() << endl;
    }
    return 0;
}
