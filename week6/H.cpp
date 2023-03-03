#include <bits/stdc++.h>
using namespace std;

void f(string n, int d, int b, int c){
    d = 0;
    b = 0;
    cin >> n;
    c = n.size();
    
    for(int i = 0; i < c; i++){

        if(n[i] % 2 == 0){
            d += 1;
        }
        else if(n[i] % 2 != 0){
            b += 1;
        }
    }
    
    if(c - d == 0){
        cout << "Valid";
    }
    
    else if(c - d != 0){
        cout << "Not valid";
    }
}

int main(){
    string n;
    int d, b, c;
    f(n, d, b, c);
}