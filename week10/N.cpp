#include <bits/stdc++.h>
using namespace std;

bool f(vector <int> v){
    int l = v.size() - 1;
    for(int i = 0; i < v.size();i++){
        if(v[i] != v[l]){
            return false;
        }
        l--;
    }
    return true;
}

int main(){
    int n; cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    do {
        if(f(v)){
            for(int i = 0; i < v.size(); i++){
                cout << v[i] << " ";
            }
            return 0;
        }
    }
    while(next_permutation(v.begin(), v.end()));
    cout << "Impossible";
}