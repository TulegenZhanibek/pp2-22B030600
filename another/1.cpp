#include <bits/stdc++.h>
using namespace std;

int main(){
   int n, d = 1;
   cin >> n;
   int a[n];

   for(int i = 0; i < n; i++){
    cin >> a[i];
   }

   for(int i = 0; i < n; i++){
    for(int )

        if(a[i + 1] != a[i]){
            a[i] = a[i + 1];
            cout << a[i] << " ";
        }
   }
}