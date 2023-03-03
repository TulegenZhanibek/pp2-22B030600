#include <bits/stdc++.h>
using namespace std;

void letters(string s){
    cin >> s;
    
    sort(s.rbegin(), s.rend());
    for(int i = s.size() - 1; i >= 0; i--){
        
            if(!(s[i] != s[i - 1])){
                
            }
    }
}

int main(){
    string s;
    letters(s);
}