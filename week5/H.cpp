#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, b, d;
    string s;
    cin >> s;
    int c[10];
    for (i = 0; i <= 9; i++){
        c[i] = 0;
    }

    for(i = 0; i < s.size();i++){
        d = s[i] - 48;
        c[d]++;
        b = c[d];
    }
    
    bool t = true;
    for(i = 0; i <= 9; i++){
        if(c[i] != 0 && c[i] != b){
            t = false;
            break;
        }
    }

    if(t) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}