#include <bits/stdc++.h>
using namespace std;

void Compare(string s){
    cin >> s;
    if(s == string(s.rbegin(), s.rend())){
        cout << "yes";
    }
    else {
        cout << "no";
    }
}

int main(){
    string s;
    Compare(s);
}