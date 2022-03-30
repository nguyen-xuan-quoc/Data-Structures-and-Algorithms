#include <iostream>
#include <string>

using namespace std;
string input;
string formatString(string input){
    /*String find is used to find the first occurrence of sub-string in the specified string being called upon. 
    It returns the index of the first occurrence of the substring in the string from given starting position. 
    The default value of starting position is 0.*/

    //string& string ::erase (size_type idx, size_type len )

    string s = input;
    while(s[0] == ' '){
        s.erase(0, 1);
    }
    while (s[s.length() - 1] == ' ')
    {
        s.erase(s.length() - 1, 1);
    }
    while (s.find("  ") != -1)
    {
        s.erase(s.find("  "), 1);
    }
    return s;
}

int main(){
    getline(cin, input);
    cout << formatString(input) << endl;
    return 0;
}