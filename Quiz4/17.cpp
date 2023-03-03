#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);

    for(int i = 0; i < s.length(); i++){

        if(string(s[i])/*'A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z')*/){
            s[i] += 1;

            if(s[i] == 'Z' + 1){
                s[i] = 'A';
                cout << s[i];
            }  
            else if(s[i] == 'z' + 1){
                s[i] = 'a';
                cout << s[i];
            }
            else {
                cout << s[i];
            }
        }

        else {
            cout << s[i];
        }
    }
}