#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int value){
        data=value;
        next=NULL;
    }
};

class linkedlist{
    node* head;

public:
    linkedlist(){
        head=NULL;
    }

    void insert(int value){
        node* newnode=new node(value);

        if(head==NULL){
            head=newnode;
            return;
        }

        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }

        temp->next=newnode;
    }

    void display(){
        node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }

        cout<<endl;
    }
};

int main(){
    linkedlist l;

    l.insert(10);
    l.insert(20);
    l.insert(30);

    l.display();
}
