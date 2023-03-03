#include <bits/stdc++.h>
using namespace std;

int f(){
    long long res = 1;
    static long a = 1;

    for(int i = 0; i < a; i++){
        res *= a;
    }
    a++;
    return res;
}

int main(){
    int n; cin >> n;
    vector <int> v(n);
    generate(v.begin(), v.end(), f);
    vector <int> :: iterator it;
    cout << 1 << " ";
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}