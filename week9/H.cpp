#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    map <string, int> m;
    int l = 1;
    while(n--){
        string s; cin >> s;
        
        if(m[s] == 0){
            m[s] = l;
        }
        l++;
    }
    map <string, int> :: iterator it;
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second;
        cout << endl;
    }

    // set <string> m;
    // for(int i = 0; i < n; i++){
    //     string s; cin >> s;
    //     m.insert(s);
    // }

    // set <string, int> :: iterator it;
    // for(it = m.begin(); it != m.end(); it++){
    //     cout << *it << " ";
    //     cout << endl;
    // }
}
