#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, c;
    cin >> n >> m;
    cin >> c;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            a[i][j] = 1;
        }
    }
    int x1, y1, x2, y2;
    for(int d = 0; d < c; d++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = y1 ;i < y2; i++) {
            for(int j = x1; j < x2; j++) {
                a[i][j] = 0;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sum += a[i][j];
        }
    }
    cout << sum;
    return 0;
}