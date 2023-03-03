#include <iostream>
#include <map>
using namespace std;
int main() {
    int n; cin >> n;
    map <int, int> m;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    int c = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(m[a[i] ^ a[j]] != 0) {
                c += 1;
            }
        }
    }   
    cout << c;
    return 0;
}