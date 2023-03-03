#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n, m;
    cin >> n >> m;
    for(size_t i = 0; i < s.length(); i++){

        if(i < n - 1){
            cout << s[i];
        }
        else if(n - 1 <= i && m - 1 >= i){
            cout << s[(m - 1 - i) + n - 1];
        }
        else if(i > m - 1){
            cout << s[i];
        }
    }
}