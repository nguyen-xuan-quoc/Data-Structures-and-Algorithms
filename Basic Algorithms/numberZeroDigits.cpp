#include <iostream>

using namespace std;

long long numberZeroDigits(int n){
    long long d = 0;
    long long k = 5;
    while(k <= n){
        d += n / k;
        k *= 5;
    }
    return d;
}

int main(){
    int n;
    cin >> n;
    cout << numberZeroDigits(n) << endl;
    return 0;
}