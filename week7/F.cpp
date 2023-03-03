#include <bits/stdc++.h>
using namespace std;

int f(string s, int k,int sum){
    if((s[k] - '0') % 2 == 0){
   sum++;
    }
    if (k == 0){
        return sum;
    }
     return f(s,--k,sum);
}

int main(){
    string s; cin >> s;
    int k = s.size() - 1;
    int sum  = 0;
    cout << f(s,k,sum);
}