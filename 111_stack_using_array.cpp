#include<iostream>
using namespace std;
class stack{
    int* arr;
    int top;
    int capacity;
public:
    stack(int size){
        arr=new int[size];
        capacity=size;
        top=-1;
    }
    void push(int x){
        if(top==capacity-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        arr[++top]=x;
    }
    int pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        return arr[top--];
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top==-1;
    }
    ~stack(){
        delete[] arr;
    }
};
int main(){
    stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Top element is: "<<s.peek()<<endl;
    cout<<"Popped element is: "<<s.pop()<<endl;
    cout<<"Top element is: "<<s.peek()<<endl;
    return 0;
}

