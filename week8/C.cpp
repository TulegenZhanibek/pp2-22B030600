#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i = 0; i< v.size(); i++){
        cin >> v[i];
    }

    int a, b;
    cin >> a >> b;
    for(int i = 0; i < v.size(); i++){

        if(a <= i && i <= b){
            cout << v[b - i + a] << " ";
        }
    }
}