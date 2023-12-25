#include <iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main (){
    int num1, num2;
    cout<<"Enter two numbers :"<<endl;
    cin>> num1>> num2 ;


    float sum = num1 + num2;
    cout<< "sum is :"<< sum<<endl;

    cout<< showpoint;
    cout<< fixed; // counts after .
    cout<<setprecision(2);

    float sub = num1 - num2;
    cout<< "sub is :"<< sub<<endl;

    float mul = num1 * num2;
    cout<< "mul is :"<< mul<<endl;

    cout<< noshowpoint;
    float div = (float)num1 / num2;
    cout<< "div is :"<< div<<endl;

    int rem = num1 % num2;
    cout<< "rem is :"<<rem<<endl;

    getch();
  
}