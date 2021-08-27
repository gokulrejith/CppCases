#include <stdio.h>
#define N 5

int main()
{
    int a[N], *p;
    printf("Enter 5 elements: ");
    for (p = a; p <= a+N-1; p++)
        scanf("%d", p);

    printf("Reverse: \n");
    for (p = a+N-1; p >= a; p--)
        printf("%d ", *p);

    return 0;
}
