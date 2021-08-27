#include <stdio.h>

int *findMid(int a[], int n);

int main(){
      int a[] = {23, 45, 6, 98, 23, 234, 532, 41};
      int n = sizeof(a)/sizeof(a[0]);
      int *mid = findMid(a,n);
      printf("%d", *mid);
      return 0;
}
//Do not return address of automatic variable (local variable)
//As variables local to a function gets destroyed.

int *findMid(int a[], int n){
    return &a[n/2];
}
