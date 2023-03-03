#include <bits/stdc++.h>
using namespace std;

void palindrome(){
    string s;
    int z = 0;
    cin >> s;

    for(int i = 0; i < s.length(); i++){

        if(s[i] == string(s.rbegin(), s.rend())){
            z += 1;
        }
    }
}