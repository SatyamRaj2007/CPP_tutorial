#include<iostream>
using namespace std;
int main(){

    int marks;
    cout<<"enter marks of student";
    cin>>marks;

    if(marks>=90){
        cout<<"grade='A'\n";
    }else if(marks>=70){
        cout<<"grade='B'\n";
    }else if(marks>=50){
        cout<<"grade='C'\n";
    }else{
        cout<<"grade='D'\n";
    }

    return 0;

}