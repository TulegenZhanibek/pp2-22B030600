#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;

    for(int i = 0; i < s.length(); i++){
        
        if(s[i] >= 'A' && s[i]  <= 'Z'){
            s[i] -= n;
            if (s[i] < 'A'){
                s[i] = s[i] + ('Z' - 'A') + 1;
                
            }
            cout << s[i];
        }
    }
}