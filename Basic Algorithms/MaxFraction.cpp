#include <iostream>
#include <vector>

using namespace std;

//numerators: tu so
//denominators: mau so

int maxFraction(vector<int> numerators, vector<int> denominators){
    int cs = 0;
    for(int i = 1; i < numerators.size(); i++){
        if(numerators[cs]*denominators[i] < numerators[i]*denominators[cs]){
            cs = i;
        }
    }
    return cs;
}

int main(){
    int n;
    cout << "Numbers of fractions: ";
    cin >> n;
    vector<int> numerators;
    vector<int> denominators;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        numerators.push_back(a);
        denominators.push_back(b);
        cout << "fraction " << i << " :" << a << "/" << b << endl;
    }
    cout << maxFraction(numerators, denominators) << endl;
    return 0;
}