#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; char a;

    for(int i = 0; i < n; i++){
        cin >> s;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < s.size(); j++){
        
            if(s[j] == a){
                s.clear();
            }
            cout << s[i];
        }
    }
}