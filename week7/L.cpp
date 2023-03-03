#include <bits/stdc++.h>
using namespace std;

void palindrome(string s){
    cin >> s;

    if(s == string(s.rbegin(), s.rend())){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}

int main(){
    string s;
    palindrome(s);
}