#include <bits/stdc++.h>
using namespace std;

void f(string s){
    cin >> s;

    for(int i = 0; i < s.length(); i++){

        if('a' <= s[i] && 'z' >= s[i] && i % 2 == 0){
            s[i] -= 32;
            cout << s[i];
        }
        else {
            cout << s[i];
        }
    }
}

int main(){
    string s;
    f(s);
}