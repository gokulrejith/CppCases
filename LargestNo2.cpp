
#include <iostream>
using namespace std;

long int findMax(long int, long int);
int main()
{
    long int a, b, max;
    cin >> a >> b;
    cout << findMax(a, b);
    return 0;
}

long int findMax(long int a, long int b)
{
    long int z, i, max;
    z = a - b; //Substract (if we get -, first number is smaller)
    i = z >> 31;  //Right Shift 32nd bit -1 if negative and 0 if positive
    if (i == 0)
        return a;
    else
        return b;
}