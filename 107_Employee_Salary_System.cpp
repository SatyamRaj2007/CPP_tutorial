#include<iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getPerson() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
};

class Employee : public Person {
protected:
    int empID;
    float salary;

public:
    void getEmployee() {
        cout << "Enter Employee ID and Salary: ";
        cin >> empID >> salary;
    }
};

class Manager : public Employee {
private:
    float bonus;

public:
    void getManager() {
        cout << "Enter Bonus: ";
        cin >> bonus;
    }

    void display() {
        float totalSalary = salary + bonus;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << empID << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

int main() {
    Manager m;
    m.getPerson();
    m.getEmployee();
    m.getManager();
    m.display();
}