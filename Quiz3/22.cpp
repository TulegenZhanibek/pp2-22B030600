#include <bits/stdc++.h>
using namespace std;

void towerpoint(int a, int b){
    cout << a << " to " << b << endl;
}
void tower(int n, int a, int b, int c){
    a = 1;
    b = 2;
    c = 3;
    cin >> n;
    tower(n - 1, a, c, b);
    towerpoint(a, b);
    tower(n - 1, c, b, a);
}

int main(){
    int n, a, b, c;
    tower(n, a, b, c);
}