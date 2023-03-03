#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int max, min;
    max = v[0];
    min = v[0];
    for(int i = 0; i < n; i++){

        if(v[i] > max){
            max = v[i];
        }

        else if(v[i] < min){
            min = v[i];
        }
    }
    cout << max - min;
}