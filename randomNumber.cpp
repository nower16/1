#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main(){

    for(int i=1; i<5; i++)
    {

    int randomNo = rand()%5 +1;
    cout<<"Random number: "<<randomNo<<endl;

    }




    getch();
}