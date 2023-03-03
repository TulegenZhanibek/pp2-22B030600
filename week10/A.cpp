#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <string> v;
    vector <int> b;

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        int a; cin >> a;
        v.push_back(s);
        b.push_back(a);
    }

    sort(v.begin(), v.end());
    sort(b.begin(), b.end());
    for(int i = 0, j = 0; i < v.size(), j < b.size(); i++, j++){
        cout << v[i] << " " << b[j] << endl;
    }
}