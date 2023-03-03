#include <bits/stdc++.h>
using namespace std;

int main(){
    long n, l, r, b;
    cin >> n >> l >> r;
    long arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
        for (int i = 0; i < l - 1; i++){
            cout << arr[i] << " ";
        }
            for (int i = r - 1; i >= l - 1; i--){
                cout << arr[i] << " ";
            }
               for (int i = r; i < n; i++){
                cout << arr[i] << " ";
               }

        return 0;
}