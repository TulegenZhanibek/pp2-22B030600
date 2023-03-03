#include <bits/stdc++.h>
using namespace std;

int main(){
    float n, a, b, d;
    cin >> a >> b;
    d = log2(b / a);

    if(a * pow(2, d) == b){
        cout << "YES " << d;
    }

    else {
        cout << "NO";
    }
}