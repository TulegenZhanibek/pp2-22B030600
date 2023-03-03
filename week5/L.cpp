#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int d = 0, c = 0;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        for(int k = i + 1; k < s.size(); k++){

            if(s[i] <= s[k]){
                d += 1;
            }
            else {
                c += 1;
            }
        }
    }
    
    if(d > 0 && c == 0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}