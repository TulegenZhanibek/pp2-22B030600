#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    if(n == 1){
        cout << 0;
        return 0;
    }
    int max = *max_element(a, a + n);
    int min = *min_element(a, a + n);
    cout << max - min - 1 - (n - 2);
        
        
}