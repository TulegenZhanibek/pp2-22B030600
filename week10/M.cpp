#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector <int> v;
    vector <int> g;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.push_back(a);
    }

    for(int j = 0; j < m; j++){
        int b; cin >> b;
        g.push_back(b);
    }

    auto it = unique(v.begin(), v.end());
    auto am = unique(g.begin(), g.end());
    v.resize(distance(v.begin(), it));
    g.resize(distance(g.begin(), am));
    vector <int> l;
    int k = v.size() + g.size();

    for(int i = 0, j = 0; i < g.size(), j < v.size(); i++, j++){
        l.push_back(v[i]);
        l.push_back(g[j]);
    }

    auto is = unique(l.begin(), l.begin() + k);
    l.resize(distance(l.begin(), is));
    for(int i = 0; i < l.size(); i++){
        cout << l[i] << " ";
    }
}