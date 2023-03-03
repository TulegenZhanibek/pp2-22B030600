#include <bits/stdc++.h>
using namespace std;
void arr(long n, long a[], long b[]) {
    int c = 0;
    long k = 0; 
    sort(a, a + n);
    sort(b, b + n) ;
    for(int i = 0; i < n; i++) {
        for(int j = c; j < n; j++) {

            if(a[i] == b[j]) {
                c = j + 1;
                k += 1;
                break;
            }
            
        }
    }
    cout << k;
}
int main() {
    long n;
    cin >> n;
    long i,j;
    long a[n];
    long b[n];
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(j = 0; j < n; j++) {
        cin >> b[j];
    }
    arr(n, a, b);
    return 0;
}