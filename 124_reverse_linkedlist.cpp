#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
Node* reverseList(Node* head){
    Node* prev=NULL;
    Node* current=head;
    Node* next=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}   
int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    cout<<"Original List: ";
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    head=reverseList(head);
    cout<<"Reversed List: ";
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return 0;
}
