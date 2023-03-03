#include <bits/stdc++.h>
using namespace std;

void f(){
    int h1, m1;
    cin >> h1 >> m1;
    int h2, m2;
    cin >> h2 >> m2;

    if(h1 <= h2 && m1 < m2){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}

int main(){
    f();
}