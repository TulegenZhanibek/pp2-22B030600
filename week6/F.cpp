#include <bits/stdc++.h>
using namespace std;

void f(string s, int n, int d){
    d = 0;
    cin >> s;
    cin >> n;

    for(int i = 0; i < s.length(); i++){

        if('0' <= s[i] && '9' >= s[i]){
            d += 1;
        }
    }
    if(d >= n){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}

int main(){
    int n, d;
    string s;
    f(s, n, d);
}