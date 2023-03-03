#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    int i = 0, j = 0, k = 1;

    while(k <= n * n){
        a[i][j] = k;

        if(i + j < n - 1 && i <= j + 1)
            ++j;

        else if(i < j && j + i >= n - 1)
            ++i;
    
        else if(i + j > n - 1 && i >= j)
            --j; 

        else 
         --i; 
        
        ++k; 
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}