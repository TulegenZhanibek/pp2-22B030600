#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int z = 0, n;
    n = s.length();
    int a[n];
    for(char i = 97; i <= 122; i++){
        a[i] = 0;
    }
    for(char i = 0; i < s.length(); i++){

            if(a[s[i] == s[i + 1]]){
                a[s[i]]++;
            }
            l = z;
        cout << i << " " << l << endl;
        z = 0;
    }
}