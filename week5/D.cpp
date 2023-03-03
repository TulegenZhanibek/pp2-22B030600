#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int d = 0;
    cin >> s;

    for(int i = 0; i < s.length(); i++){

        if(s[i] == s[s.length() - 1 - i]){
            d++;
        }
    }
    cout << (d == s.length() ? "YES" : "NO");
}