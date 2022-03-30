#include <iostream>
#include <math.h>
#include<string>

using namespace std;

int pagesNumbering(int n){
    //pow(x, y) = x ^ y
    int k = 1;
    int v1 = 0;
    int v2 = 0;
    int m = to_string(n).length();
    if(n > 0 && n < 10){
        v1 = n;
        v2 = 0;
    } else{
        for(int i = 1; i < m; i++){
            v2 = v2 + 9*i*k;
            k *= 10;
        }
        v1 = (n - (int)pow(10, m-1) + 1) * m;
    }
    return v1 + v2;
}

int main(){
    int n;
    cin >> n;
    cout << pagesNumbering(n) << endl;
    return 0;
}