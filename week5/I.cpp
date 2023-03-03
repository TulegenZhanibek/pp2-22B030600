#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int c = s.length();
    int d = t.length();
    int i, j;

        
    if(s[i] == t[t.size() - 1 - j] || c == d && s[i] == t[j]){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}