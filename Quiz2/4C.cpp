#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d = 0;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++){

            if(a[i] == a[i + 1]){
                d += 1;
            }
    }
    
    if(d > 0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}