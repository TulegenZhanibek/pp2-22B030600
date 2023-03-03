#include <bits/stdc++.h>
using namespace std;

void f(char a){
    cin >> a;

    if('A' <= a && 'Z' >= a){
        cout << a;
    }
    else if('a' <= a && 'z' >= a){
        cout << (char)(a - 32);
    }
}

int main(){
    char a;
    f(a);
}