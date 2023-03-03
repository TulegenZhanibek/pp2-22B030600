#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, z;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

        z = a[0];
        cout << z << " ";
        for (int i = 1; i < n; i++){

            if (z != a[i]){
                cout << a[i] << " ";
                z = a[i];
            }
                
        }
            
        return 0;
}