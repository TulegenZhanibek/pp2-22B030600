#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int x, d = 0;
    char n;
    cin >> s >> n >> x;

    for(int i = 0; i < s.size(); i++){
        
        if(s[i] == n){
            d += 1;
        }
    }

    if(d == x){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}