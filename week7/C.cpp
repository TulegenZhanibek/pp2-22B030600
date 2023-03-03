#include <bits/stdc++.h>
using namespace std;

int f(int a[], int n, int m){
    
    if(n < 0){
        return 0;
    }

    if(a[n - 1] == m){
        return 1;
        
    }
    else {
        f(a, n - 1, m);
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int m;
    cin >> m;

    if(f(a, n, m)){
        cout << "Yes";
    }

    else {
        cout << "No";
    }
}