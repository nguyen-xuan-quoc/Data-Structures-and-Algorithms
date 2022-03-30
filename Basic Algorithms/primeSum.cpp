#include <iostream>
#include <math.h>

using namespace std;

bool arr[10000001];
void snt(int n){
    arr[0] = arr[1] = 0;
    for(int i = 2; i <= n; i++){
        arr[i] = 1;
    }
    for(int i = 2; i <= sqrt(n); i++){
        for(int j = i*i; j <= n; j += i){
            arr[j] = 0;
        }
    }
}

int isPrimeSum(int n){
    int mod = 22082018;
    snt(n);
    int d = 0;
    for(int i = 2; i <= n; i++){
        if(arr[i]){
            d = (d + i % mod) % mod;
        }
    }
    return d;
}

int main(){
    int n;
    cin >> n;
    cout << isPrimeSum(n) << endl;
    return 0;
}