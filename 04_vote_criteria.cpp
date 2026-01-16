#include<iostream>
using  namespace std;
int main(){

    int age;
    cout<<"enter age:";
    cin>>age;

    if(age>=18){
        cout<<"you are eligible for voting\n";
    }else{
        cout<<"you are not elegible for voting\n";
    }

    return 0;

}