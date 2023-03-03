#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, k;
    getline(cin, s);
    int c, sum = 0;

    for(int i = 0; i < s.length(); i++){
        k += s[s.length() - 1 - i];
    }

    for(int j = 0; j < k.length(); j++){
        k[j] -= 48;
        c = pow(2, j) * k[j];
        sum += c;
    }
    cout << sum;
}