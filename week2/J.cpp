#include <bits/stdc++.h>
using namespace std;

int main (){
    int n,c,a; 
    a = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> c;

        for (int y = 1; y <= c; y *= 10){

            if ( c / y % 10 == 0){
            a++;
        }        
      }
    
    }
    cout << a;
    return 0;  
}

