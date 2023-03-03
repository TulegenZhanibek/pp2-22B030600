#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector <int> v;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.push_back(a);
    }

    rotate(v.begin(), v.begin() + m, v.end());
    reverse(v.begin(), v.end());
    vector <int> :: iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}