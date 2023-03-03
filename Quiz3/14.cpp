#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;

        if(s == "South"){
            cout << 0 << " " << -n;
        }

        else if(s == "West"){
            cout << -n << " " << 0;
        }
}