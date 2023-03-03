#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    char max = 'a';
    cin >> s;

    for(int i = 0; i < s.size(); i++){

        if(s[i] > max){
            max = s[i];
        }
    }
    cout << max;
}