#include<iostream>
#include<string>
using namespace std;

class Student {
protected:
    int rollNo;
    string name;

public:
    void getStudent() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cin.ignore();  // clears newline from buffer

        cout << "Enter Name: ";
        getline(cin, name);  // allows full name with spaces
    }

    void displayStudent() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

class Result : public Student {
private:
    int m1, m2, m3;
    int total;
    float avg;

public:
    void getMarks() {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate() {
        total = m1 + m2 + m3;
        avg = total / 3.0;
    }

    void displayResult() {
        displayStudent();
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << avg << endl;
    }
};

int main() {
    Result r;
    r.getStudent();
    r.getMarks();
    r.calculate();
    r.displayResult();

    return 0;
}