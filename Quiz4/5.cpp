#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d; cin >> n;
    string s;

    while(n != 0){
        d = n % 16;
        
        if(d >= 10){
            s += char (d + 55);
        }
        else if(d < 10){
            s += char (d + 48);
        }
        n /= 16;
    }
    reverse(s.begin(), s.end());
    cout << s;
}