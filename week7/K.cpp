#include <bits/stdc++.h>
using namespace std;

void f(string s, int max){
    max = 0;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        s[i] -= 48;
        
        if(s[i] > max){
            max = s[i];
        }
    }
    cout << max;
}

int main(){
    int max;
    string s;
    f(s, max);
}