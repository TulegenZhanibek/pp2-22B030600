#include <bits/stdc++.h>
using namespace std;

void f(int n, int d, int sum){
    sum = 0;
    cin >> n;
    d = n % 10;

    while(n != 0){
        sum += n % 10;
        n /= 10;
    }

    if(sum % d == 0){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}

int main(){
    int n, d, sum;
    f(n, d, sum);
}