#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1, m1, h2, m2;
    cin >> h1 >> m1;
    cin >> h2 >> m2;

    if(h1 == h2 && m1 < m2){
        cout << "Yes";
    }
    else if(h1 >= h2 && m1 <= m2){
        cout << "No";
    }
}