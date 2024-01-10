#include <iostream>
#include <conio.h>
using namespace std;

class student
{
public:
    const int admissionfee;
    const int examfee;
    int id;

    student(int x, int y, int z)
        : admissionfee(x), examfee(y)

    {
        cout << admissionfee << endl;
        cout << examfee << endl;
        id = z;
        cout << id << endl;
    }
};

int main()
{
    student s1(15000, 500, 101);

    getch();
}
