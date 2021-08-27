#include <stdio.h>

void minMax(int arr[], int len, int *min, int *max){
    *min = *max = arr[0];
    for(int i = 1; i<len;i++){
        if(arr[i] > *max)
        *max = arr[i];
        if(arr[i] < *min)
        *min = arr[i];
    }
}

int main(){
    int a[] = {23, 45, 6, 98, 23, 234, 532, 41};
    int min, max;
    int len = sizeof(a)/sizeof(a[0]);
    minMax(a, len, &min, &max);
    printf("Min: %d and Max: %d", min, max);
    return 0;
}