#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n][n];
    int k = 0, c = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) {
                if(a[i][j] == a[j][i]){
                    c += 1;
                }
                else {
                    k += 1;
                }
            }
        }
    }
    if(k > 0) {
        cout << "Not perfect.";
    }
    else {
        cout << "Perfect.";
    }
}