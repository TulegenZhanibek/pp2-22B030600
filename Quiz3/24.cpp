#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, l;
    int d = 1;
    cin >> s >> l;
    
    for(int i = 0; i < s.length(); i++){
        for(int j = i; j < l.length(); j++){

            if(s[i + j] == s[j]){
                d += 1;
            }
        }
    }
    cout << d;
}