#include <bits/stdc++.h>
using namespace std;

void acc(int n, int t, int v, int j){ 
    t = 0;
    v = 0;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    cin >> t;
    for(int i = 0; i < n; i++){

        if(a[i] == t){
            v += 1;
        }
        else if(a[i] != t){
            j -= 1;
        }
    }
    
    if(v > 0){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}

int main(){
    int n, t, v, j;
    acc(n, t, v, j);
}