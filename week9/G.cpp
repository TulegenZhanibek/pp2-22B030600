#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    stack <char> n;
    int a = s.length();
    for(int i = a - 1 ; i >= 0; --i) {
        if(n.empty()) {
            n.push(s[i]);
        }
        else if(s[i] == '1' && s[i] == n.top()) {
            n.pop();
        }
        else {
            n.push(s[i]);
        }
    }

    int i = 0;
    
    while(!n.empty()) {
        cout << n.top();
        n.pop();
    }
}