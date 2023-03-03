#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <pair <int, int> > v;

    for(int i = 1; i <= n; i++){
        int a, b; cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    int k , i = 1;
    multimap <int, int> m;
    vector<pair<int,int> > :: iterator it = v.begin();
    for( ; it != v.end(); it++) {
        k = it->first + it->second;
        m.insert(make_pair(k, i));
        i++;
    }
    multimap<int,int> :: iterator f = m.begin();
    for( ; f != m.end(); f++) {
        cout << f->second << " ";
    }
    return 0;
}