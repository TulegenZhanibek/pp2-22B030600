#include<bits/stdc++.h>
using namespace std;


int main(){
    int n, b, q;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

        for (int i = n - 1; i != -1; i--){
            cout << array[i] << " ";
        }
     
        
    return 0;
}