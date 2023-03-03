#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0; cin >> n;
    map <string, double> m;
    for(int i = 0; i < n; i++){
        int t; cin >> t;

        for(int j = 0; j < t; j++){
            string s; cin >> s;
            int g; cin >> g;
            m[s] += g;
            sum += g;
        }
    }
    map <string, double> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << it -> first << " " << (it -> second * 100) / sum << endl;
    }
}