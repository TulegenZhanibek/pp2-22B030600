#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;

    for(int i = 0; i < s.length(); i++){

        if(!('A' <= s[i] && s[i] <= 'Z' || isdigit(s[i]))){
            cout << s[i];
        }
    }
}