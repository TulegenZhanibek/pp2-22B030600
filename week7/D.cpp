#include <bits/stdc++.h>
using namespace std;
int d=0;
int f(string s, int d){
    if(d == s.size()){
        return 0;
    }
    return (s[d] - '0') + f(s, d + 1);
}

int main(){
    string s;
    cin >> s;
    cout << f(s, d); 
}