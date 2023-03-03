#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int j,k;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ') {
            k = i;
        }
        
        if(s[i] != ' ') {
            if('0' <= s[i] && s[i] <= '9'){
                j = i;
                s.erase(k , j);
            }
            cout << s[i];
        }
        if(s[i] == ' '){
            cout << endl;
        }
    }
}