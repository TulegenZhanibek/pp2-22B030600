#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    char b;
    for(int i = 0; i < s.size(); i++){
        b = s[i] + 1;

        if(s[i] == 'z'){
            cout << 'a';
        }
        else {
            cout << b;
        }
    }
}