#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    int a;
    cin >> a;
    sort(v.begin(), v.end());
    for(int i = 0, j = 0; i < v.size(), j < a; i++, j++){
        cout << v[j] << " ";
    }
}