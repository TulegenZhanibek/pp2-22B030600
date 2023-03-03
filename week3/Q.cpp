#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, m;
    cin >> x;
    
    for (int i = 2; i < (x - 1); i++){
        
        if (x % i == 0){
            m += 1;
        }
    }
        if (m > 0){
            cout << "No";
        }
            else if (m == 0){
                cout << "Yes";
            }
    
    return 0;     
}
