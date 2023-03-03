#include <bits/stdc++.h>
using namespace std;

int main(){
    int small = 0, big = 0, n;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && 'z' >= s[i]){
            small++;
        }
        else {
            big++;
        }
    }
    cout << small << " " << big;
}