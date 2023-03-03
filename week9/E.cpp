#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string ,int> m;
    for (int i = 0; i < n; i++){ 
        string s; cin >> s; // -> as -> as -> qq
        m[s]++; // m[s] = m[s] + 1; m[as] = 0 + 1; m[as] = 1 + 1; m[qq] == 0 + 1 -> m[qq] = 1;
    }
    int cnt = 0;
    // for(auto &i : m){
    //      if (i.second == 3){
    //          cnt++;
    //      }
    // }
     map<string,int> :: iterator it; //  second
     for(it = m.begin(); it != m.end(); it++){
         if ((*it).second == 3){
             cnt++;
         }
     }
    cout << cnt;
}