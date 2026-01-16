#include<iostream>
using namespace std;

// sum of two numbers
double sum(double a,double b){
    double s=a+b;
    return s;
}

// minimum of two number
// variables used in function is called parameters
int min(int x,int y){
    if(x<y){
        return x;
    }else{
        return y;
    }
    
}
int main(){

    // function calling for sum
   
    cout<<sum(11.5,24.2)<<endl;
    
    // function calling of minimum number
    // values given at the time of function calling this is called argumentes
    cout<<"min = "<<min(31,65);


    return 0;
}