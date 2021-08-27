#include <stdio.h>
//Row major order. Stored row by row sequentially
int main()
{
    int arr[2][3][3] = {{{1, 13, 14},
                         {12, 54, 21},
                         {12, 54, 21}},
                        {{1, 13, 14},
                         {12, 54, 21},
                         {12, 54, 21}}},

        *p;
    for (p = &arr[0][0][0]; p <= &arr[1][2][2]; p++)
        printf("%d ", *p);
    return 0;
}
//Printing 3D array using pointer.