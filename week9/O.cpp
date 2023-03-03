#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map <string, string> m;

    for(int i = 0; i < n; i++){
        string a, b; cin >> a >> b;
        m[a] = b;
    }

    int g; cin >> g;
    for(int i = 0; i < g; i++){
        string a, b; cin >> a >> b;
        if(m[a].empty()){
            cout << "login error" << endl;
        }
        else if(m[a] == b){
            cout << "correct password" << endl;
        }
        else {
            cout << "password error" << endl;
        }
    }
}