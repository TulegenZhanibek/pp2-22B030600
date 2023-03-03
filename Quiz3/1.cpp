#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int z = 1;
    cin >> s;
    
    sort(s.begin(), s.end());
    for(int i = 0; i < s.length(); i++){
        
        if(s[i] == s[i + 1]){
            z += 1;
            continue;
        }
        cout << s[i] << ": " << z << endl;
        z = 1;
    }
}