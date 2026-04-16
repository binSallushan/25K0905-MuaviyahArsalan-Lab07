#include <iostream>
using namespace std;

class Staff {
public:
    virtual double processSalary() = 0;
};

class SalariedEmployee : public Staff {
    double salary;
public:
    SalariedEmployee(double s) : salary(s) {}

    double processSalary() override {
        return salary;
    }
};

class CommissionEmployee : public Staff {
    double sales, percentage;
public:
    CommissionEmployee(double s, double p) : sales(s), percentage(p) {}

    double processSalary() override {
        return sales * percentage;
    }
};

int main() {
    Staff* employees[2];

    employees[0] = new SalariedEmployee(60000);
    employees[1] = new CommissionEmployee(200000, 0.1);

    for (int i = 0; i < 2; i++) {
        cout << "Salary: " << employees[i]->processSalary() << endl;
    }

    return 0;
}
