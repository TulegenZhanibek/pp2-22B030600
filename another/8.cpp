#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int d = s.length();
    int b = t.length();
    
    if(t.find(s) != -1 && b % d == 0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}