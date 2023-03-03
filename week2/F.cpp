#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,c,i;
    cin >> n;
    i = 0;
    while (n >= i){
        i++; 
        c += i;
    }
    cout << c; 
    return 0;
}
