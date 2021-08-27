#include <stdio.h>

int main(){
    int a[] = {11, 22, 36, 5, 2};
    int sum = 0, *p;
    for(p = a;p<=&a[4];p++)//Name of array as address. It REPRESENTS THE BASE ADDRESS.
    sum += *p;
    printf("Sum is %d", sum);

    return 0;
}