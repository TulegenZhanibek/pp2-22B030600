#include <bits/stdc++.h>
using namespace std;

void f(int n, int sum){
    sum = 0;
    cin >> n;

    while(n != 0){
        n % 10;
        sum += (n % 10) / 2;
        n /= 10;
    }
    cout << sum;
}

int main(){
    int n, sum;
    f(n, sum);
}