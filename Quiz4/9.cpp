#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string c; cin >> c;
    char a; cin >> a;

    for(int i = 0; i < c.length(); i++){
        for(int j = 0; j < s.length(); j++){

            if(s[j] == c[i]){
                s[j] = a;
            }
        }
    }

    for(int j = 0; j < s.length(); j++){
        cout << s[j];
    }
}