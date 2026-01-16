#include<iostream>
using namespace std;

int main(){

    int num,choice;

    cout<<"--menu--"<<endl;
    cout<<"1.check divisibility by 5 and 11"<<endl;
    cout<<"2.check whether number is even or oddd"<<endl;
    cout<<"enter your choice (1 or 2):";
    cin>>choice;

    cout<<"enter a number:";
    cin>>num;

    switch(choice){

        case 1:
        if(num%5==0 && num%11==0){
            cout<<"number is divisibl eby 5 and 11";
        }
        else{
            cout<<"number is not divisible by 5 and 11";
        }
        break;

        case 2:
        if(num%2==0){
            cout<<"Entered number is a even number";
        }
        else{
            cout<<"Entered number is a odd number";
        }

        default:
        cout<<"invalid choice!! choice is not availabe enter 1 or 2";
    }

    return 0;


}