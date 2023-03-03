#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, m, n;
    cin >> x;
    m = sqrt(x);

    if (x != m * m){
        cout << "No";
    }
    
        else if (x == m * m){
            cout << "Yes";
        }
}