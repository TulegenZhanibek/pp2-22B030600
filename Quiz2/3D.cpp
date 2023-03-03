#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, k;
    cin >> n;
    int a[n];
    int b[n];

    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){

            if(a[i] == a[j]){
                
                for(k = j + 1; k < n; k++){

                    if(a[j] == a[k]){
                        cout << a[j];
                        return 0;
                    }
                }
            }
        }
    }
    
    
    sort(a, a + n);
    for(i = n - 1; i >= 0; i--){
        for(j = i + 1; j < n; j++){

            if(a[i] == a[j]){
                cout << a[j] << " ";
                for(int k = j + 1; k < n; k++){

                    if(a[j] != a[k]){
                        
                    }
                }
            }
        }
    }

    /*sort(a, a + n);
    for(int i = n - 1; i >= 0; i--){
        for(int j = i + 1; j < n; j++){

            if(a[i] != a[j]){
                cout << a[i] << " ";
            }
        }
    }*/
}