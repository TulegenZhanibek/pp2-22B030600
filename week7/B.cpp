#include <bits/stdc++.h>
using namespace std;

void f(long long n, string bia){
    cin >> n;

    while(n != 0){
        bia = (n % 2 == 0 ? "0" : "1") + bia;
        n /= 2;
    }
    cout << bia;

    /*for(int j = bia - 1; j >= 0; j--){
        cout << bin[j];
    }*/
}

int main(){
    long long n;
    string bia;
    f(n, bia);
}