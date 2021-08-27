#include <stdio.h>
//Accessing different array elements using pointers.
int main(){
    int arr[5] = {1,2,3,4,5};
    int *a = &arr[2];
    printf("Test1: %d", *(a-2));

    return 0;
}