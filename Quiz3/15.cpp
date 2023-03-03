#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    string t;

    for(int i = 0; i < s.length(); i++){

        if(s[i] == ' '){
            continue;
        }
        t += s[i];
    }
    
    if(t == string(t.rbegin(), t.rend())){
        cout << "yes";
    }
    else {
        cout << "no";
    }
}