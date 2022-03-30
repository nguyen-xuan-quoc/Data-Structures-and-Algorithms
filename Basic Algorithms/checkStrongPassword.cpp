#include <iostream>
#include <string>

using namespace std;

bool checkStrongPassword(string password){
    if(password.length() < 6){
        return false;
    }
    string p = "!@#$%^&*()-+";
    string s = password;
    bool kt1 = false;
    bool kt2 = false;
    bool kt3 = false;
    bool kt4 = false;
    for(int i = 0; i < password.length(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            kt1 = true;
        }
        if(s[i] >= 'A' && s[i] <= 'Z'){
            kt2 = true;
        }
        if(s[i] >= '0' && s[i] <= '9'){
            kt3 = true;
        }
        if(p.find(s[i]) != -1){
            kt4 = true;
        }
    }
    return kt1 && kt2 && kt3 && kt4;
}

int main(){
    cin.ignore();
    string s;
    getline(cin, s);
    cout << checkStrongPassword(s) << endl;
    return 0;
}