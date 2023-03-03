#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    vector <int> v;

    for(int i = 0; i < n; i++){
        cin >> m;
        v.push_back(m);
    }

    int a; cin >> a;
    int z = 0, j = 2, d = 0;
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
       
        if(v[i] >= a){
            d++;
            for(int j = 2; j < v[i]; j++){

                if(v[i] % j == 0){
                    z++;
                    break;
                }
            }
        }
    }
    if(z == 0){
        cout << d;
    }

    else if(z == d){
        cout << z;
    }

    else {
        cout << d - z;
    }
}