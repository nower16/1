#include <iostream>
#include <conio.h>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    char name1[] = "Nuzhat";
    char name2[] = " Nower";
    char name3[] = " nower";

    strcat(name1, name2);
    cout << name1 << endl;

    int value = strcmp(name1, name2);

    if (value == 0)
        cout << "Srings are equal" << endl;

    else
        cout << "Srings are not equal" << endl;

    string str1 = "tamzid";
    string str2 = " ahmed";
    string str3;

    str3 = str1;
    cout << "str3 = " << str3 << endl;

    str3 = str1 + str2;
    cout << "str1+str2 =" << str3 << endl;

    int len = str1.size();
    cout << "Length of str1 = " << len << endl;

    getch();
}