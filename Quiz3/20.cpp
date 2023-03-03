#include <bits/stdc++.h>
using namespace std;

int main(){
    int k = 0;
    string s, res = "";
    cin >> s;
    string s1 = s;
    reverse(s1.begin(), s1.end());
    if(s == s1){
        cout << s;
        return 0;
    }
    for(int i = 0; i < s.size(); ++i){
        for(int j = i; j < s.size(); ++j){
            string t = s.substr(i, j - i + 1);
            string t1 = t;
            reverse(t.begin(), t.end());
            if(t == t1 && t.size() > k){
                res = t;
                k = res.size();
            }
        }
    }
    cout << res;
    return 0;
}