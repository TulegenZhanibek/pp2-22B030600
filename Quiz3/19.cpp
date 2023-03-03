#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    for(int i = 0; i < 3; i++){
        
            if(s[i] == '127' || s[i] == '192' || s[i] == '255'){
                cout << 1;
            }
            else {
                cout << 0;
            }
    }
}