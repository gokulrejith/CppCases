#include <stdio.h>

int main(){
    int a[2][2] = {{45,54},{12,21}};
    int **p = &a[0][0];
    printf("%d",**(p));
    return 0;
}