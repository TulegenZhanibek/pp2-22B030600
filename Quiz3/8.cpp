#include <bits/stdc++.h>
using namespace std;

void Shift(){
    char c;
    string s;
    cin >> c >> s;
    
    for(int i = 0; i < s.length(); i++){

        if(!(s[i] == c)){
            cout << s[i];
        }
    }
}

int main(){
    Shift();
}