#include <iostream>
#include <math.h>
bool arr[1000];

using namespace std;

void snt(int n){
    for(int i = 2; i <= n; i++){
        arr[i] = 1;
    }
    arr[0] = arr[1] = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(arr[i]){
            for (int j = i * i; j <= n; j += i){
                arr[j] = 0;
            }
        }
    }
}

int greatestComonPrimeDivision(int a, int b){
    snt(min(a, b));
    for(int i = min(a, b); i >= 2; i--){
        if(arr[i] && a % i == 0 && b % i == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << greatestComonPrimeDivision(a, b) << endl;
    return 0;
}