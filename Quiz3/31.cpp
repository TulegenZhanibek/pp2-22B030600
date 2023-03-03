#include <bits/stdc++.h>
using namespace std;

void f(){
    int n, d = 0, c = 0;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
            cin >> a[i];
        }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){

            if(a[i] == a[j]){
                d += 1;
            }
            if(a[i] != a[j]){
                c += 1;
            }
        }
    }
    if(d > 0 && c == 0){
        cout << "Yes";
    }

    else {
        cout << "No";
    }
}

int main(){
    f();
}