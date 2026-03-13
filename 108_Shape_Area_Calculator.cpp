#include<iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "Area Calculation" << endl;
    }
};

class Rectangle : public Shape {
private:
    int length, width;

public:
    void getData() {
        cout << "Enter length and width: ";
        cin >> length >> width;
    }

    void area() {
        cout << "Rectangle Area: " << length * width << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    void getData() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void area() {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Rectangle r;
    r.display();
    r.getData();
    r.area();

    Circle c;
    c.display();
    c.getData();
    c.area();
}