#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int m; cin >> m;
    sort(v.begin(), v.end());
    vector <int> c(n);
    for(int i = v.size() - 1, j = 0; i >= 0, j < n; i--, j++){
        c[j] += v[i];
    } 
    
    int sum = 0;
    for(int g = 0; g < m; g++){
        sum += c[g];
    } 
    cout << sum;
}