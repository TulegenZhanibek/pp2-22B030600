#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int d = s.length();
    int c = t.length();

    if(t.find(s) != -1 && c % d == 0){
        cout << "YES";
    }

    else {
        cout << "NO";
    }

}