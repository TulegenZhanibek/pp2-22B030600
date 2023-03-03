#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j;
    cin >> n;
    int a[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);
    for(i = n - 1; i >= 0; i--){
        for(j = i + 1; j < n; j++){

            if(a[i] == a[j]){
                
                if(a[j] == a[j + 1]){
                    cout << a[j];
                    return 0;
                }
            }    
        }
    }

    sort(a, a + n);
    for(i = n - 1; i >= 0; i--){
        for(j = i + 1; j < n; j++){

            if(a[i] == a[j]){
                
                if(a[j] == a[j]){
                    cout << a[j] << " ";
                }
            }
        }
    }

    if(a[i] != a[j]){

        sort(a, a + n);
        for(i = n - 1; i >= 0; i--){
                cout << a[i] << " ";
        }
    }
}