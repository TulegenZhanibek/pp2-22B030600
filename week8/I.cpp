#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    int m, d = 0;
    cin >> m;
    for(int i = 0; i < v.size(); i++){

        if(v[i] == m){
            d++;
        }
    }

    if(d > 0){
        cout << "Yes";
    }
    
    else {
        cout << "No";
    }
}