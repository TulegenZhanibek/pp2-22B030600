#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    sort(a, a + n);
    for(int i = 0; i < n; i++){

        if(a[i] == a[n - i]){
            cout << "Yes";
            return 0;
        }
    }

    sort(a, a + n);
    for(int i = 0; i < n; i++){

        if(a[i] != a[n - i]){
            cout << "No";
            return 0;
        }
    }
}