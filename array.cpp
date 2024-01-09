#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 99};
    int len = sizeof(array) / sizeof(int);
    cout << "The length of the array is: " << len << endl;

    // 11 10 9 8 7 6 5 4 3 2 1 0

    for (int i = len - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }

    return 0;
}