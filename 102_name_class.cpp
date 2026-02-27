#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int roll_no;
    int marks1, marks2, marks3;
};

class random1 : public Student{
public:
    void input(){
        cin >> name;
        cin >> roll_no;
    }
};

class random2 : public Student{
public:
    void input(){
        cin >> marks1 >> marks2 >> marks3;
    }
};

class average :  public random2{
public:
    void display(){
        cout << (double)(marks1 + marks2 + marks3) / 3;
    }
};

int main(){
    average o2;
    random1 o1;
    o1.random1::input();   
    o2.random2::input();   
    o2.display();
    return 0;
}
