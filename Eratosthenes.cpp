#include <iostream>
using namespace std;

void primeConv(int);
void primeErato(int);

int main(){
    int n;
    cin>>n;
    primeConv(n);
    cout<<endl;
    primeErato(n);
    return 0;
}

void primeConv(int n){
    if (n == 1){
        exit(0);
    }
    else{
        for(int i = 2 ; i <= n ; i++){
            int flag = 0;
            for(int j = 2 ; j <= i/2 ; j++){ //In case of 2, not getting into this loop.
                if(i%j == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                cout<<i<<" ";
            }
        }
    }
}

void primeErato(int n){
int prime[n] = {0};
for(int i =2;i<=n;i++){
    if (prime[i] == 0){
        for(int j = i*i; j <= n ; j+=i){
            prime[j] = 1;
        }
    }
}

for(int i = 2;i<=n;i++){
    if(prime[i]==0){
        cout<<i<<" ";
    }
}
}