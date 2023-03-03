#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;

    if ((n * 2) == k){
        cout << k / n;  
    }

        else if (k == 2 && n > k){
            cout << n;
        }

            else if (n < (k * 2)){
                cout << "4";
        }
    
    return 0;
}