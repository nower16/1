#include<iostream>
#include<conio.h>
using namespace std;

// 1+2+3+.....+n

int main()
{
    double sum=0,n;

    cout<<"Enter the last number: ";
    cin>>n;

    for(double i=1; i<=n; i=i+1)
    {
        sum = sum+i*i;
    }

    cout<< sum;

    getch();
}

