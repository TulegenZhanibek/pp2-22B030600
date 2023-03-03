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
    for(int i = 0; i < v.size(); i++){

        if((v[i] == v[a])){
            continue;
        }
        else {
            cout << v[i] << " ";
        }
    }
}