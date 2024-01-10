#include <iostream>
using namespace std;

class student

{
public:
    int id;
    double gpa;

    void display()
    {
        cout << id << "  " << gpa << endl;
    }
    // Constructor
    student(int x, double y)
    {
        id = x;
        gpa = y;
    }
};

int main()
{

    student Alim(101, 3.44);
    Alim.display();

    student Almas(102, 3.67);
    Almas.display();

    return 0;
}