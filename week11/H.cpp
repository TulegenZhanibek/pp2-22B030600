#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    char a;

    for(int i = 0; i < s.size(); i++){
        a = 65 + (s[i] -  65 + n) % 26 ;
        cout << a;
    }
}