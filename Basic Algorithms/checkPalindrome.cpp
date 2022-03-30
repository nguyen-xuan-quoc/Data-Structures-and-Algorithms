#include <iostream>
#include <string>

using namespace std;

string s;
bool checkPalindrome(string s) {
    string re = "";
    for(int i = s.length() -1; i  >= 0; i --){
        re += s[i];
    }
    return s == re;
}

int main(){
    getline(cin, s);
    cout << checkPalindrome(s) << endl;
    return 0;
}