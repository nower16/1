#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
    char name1[] = "Nuzhat";
    char name2[] = " Nower";
    char name3[] = " nower";

    int len = strlen(name1);
    cout << "Length of string: " << len << endl;

    strcat(name1, name2);
    cout << name1 << endl;

    int value = strcmp(name1, name2);

    if (value == 0)
        cout << "Srings are equal";

    else
        cout << "Srings are not equal";

    getch();
}