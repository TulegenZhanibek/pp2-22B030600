#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int d = 0;

    for(int i = 0, j = s.length() - 1; i < s.length(), j >= 0; i++, j--){
        for(int c = i + 1, k = j - 1; c < s.length(), j >= 0; c++, j--){

            if(s[c] == s[k]){
                cout << 0;
                return 0;
            }
            else {
                d += 1;
            }
        }
    cout << d;
    }
}