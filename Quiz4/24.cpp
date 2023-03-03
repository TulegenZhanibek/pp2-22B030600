#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int index = 0, cnt = 0;
    int ans = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size() - index; j++){
            if(s[j] != s[s.size() - index - 1 - j]){
                ans = s.size() - index;
                cnt = 1;
            }
        }
        if(cnt == 1){
            break;
        }
        index++;
    }
    cout << ans;
    return 0;
}