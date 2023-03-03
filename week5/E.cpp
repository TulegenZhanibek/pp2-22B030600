#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int d = 0, c = 0;
    cin >> s;

    for(int i = 1; i <= s.length(); i++){

        if(i % 2 == 0){
            d++;
        }
        if(i % 2 != 0){
            c++;
        }
    }
    cout << (d == c ? "YES" : "NO");
}
