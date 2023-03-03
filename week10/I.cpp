#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v;

    for(int i = 0; i < n; i++){
        int m; cin >> m;
        v.push_back(m);
    }

    for(int i = 0, j = n - 1; i < n, j >= 0; i++, j--){

        if(v[i] == v[j]){
            cout << "OK" << endl;
        }
        else {
            cout << "Instead of " << v[i] << " here was " << v[j] << endl;
        }
    }
}