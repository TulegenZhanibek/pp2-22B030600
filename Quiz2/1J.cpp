#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    char mn = s[0], mx = s[0];

    for(int i = 0; i < s.length(); i++){

        if(s[i] > mx){
            mx = s[i];
        }

        else if(s[i] < mn){
            mn = s[i];
        }
    }
    cout << mx << " " << mn;
}