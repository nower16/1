#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;

int main()
{
    while(1)
    {
        int guessNo, randomNo;


    cout<<"Enter your guess between 1 to 5: ";
    cin>> guessNo;


    randomNo = 1+ rand()%5;

    if(guessNo == randomNo)

    {
        cout<< "You Have Won!!!"<<endl<<endl;
    }

    else{
        cout<< "You have lost. Try again"<<endl;
        cout<<"Random number was:"<< randomNo<<endl<<endl;
    }


    }
     getch();
}


