#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d = 0; cin >> n;
    map <string, set <int> > m;

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        int a; cin >> a;
        m[s].insert(a);
    }

    for(auto it : m){
        if(it.second.size() > 2){
            cout << it.first << " +1" << endl;
        }
        else {
            cout << it.first << " " << "NO BONUS" << endl;
        }
    }
}