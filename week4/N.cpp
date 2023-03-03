#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, z,i;
    int j;
    cin >> n;
    cout << "2 is prime" << endl;
    if (n > 2) {
        cout << "3 is prime" << endl;
    }
    for(i = 1; i < n; i++){
        for( j = 2; j * j <= i; j++){ 
            if(i % j == 0) {
                break;
            }
            else if(j + 1 > sqrt(i)) {
                 cout << i << " is " << "prime" << endl;
            }
        }
        //cout << endl;
    }
}