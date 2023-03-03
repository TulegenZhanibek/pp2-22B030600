#include <bits/stdc++.h>
using namespace std;

void f(string s){
    getline(cin, s);
    
    for(int i = 0; i < s.length(); i++){

        if(!(s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U')){
            cout << s[i];
        }
    }
}

int main(){
    string s;
    f(s);
}