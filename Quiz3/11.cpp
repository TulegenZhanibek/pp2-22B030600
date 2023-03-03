#include <bits/stdc++.h>
using namespace std;

int ma(){
    int n;
    cin >> n;

    if(n == 0){
        return 0;
    }

    else if(n > 0){

        for(int i = n; i >= 0; i -= 3){

            
        }
    }
}

int main(){
    int n, z = 0;
    cin >> n;

    for(int i = n; i >= 0; i -= 3){

        if(i % 5 == 0){
            z += 1;
        }
    }
    cout << z;
}