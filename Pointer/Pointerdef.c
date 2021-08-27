//Pointer is a variable that is capable of storing the address or base-address of a variable.
//Points to the first address.
// int *ptr; char *ptr1;


#include <stdio.h>

int main(){
    int x = 5, *ptr = &x;
    // int *ptr1;
    // printf("%d", *ptr1);  >> Segementation fault
    int i = 10, *p, *q;
    p = &i;
    q = p;
    printf("%d %d", *p, *q);
    return 0;
}
