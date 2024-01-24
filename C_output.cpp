#include <stdio.h>
#include <iostream>

int main()
{
    int x = 5, y = 5, z = 5;
    printf("%d %d %d", x, ++z + y - 1 - y + z + x++, x);

    // int i = 3, j = 2;
    // while (--i)
    // {
    //     printf("%d ", i);
    // }
}