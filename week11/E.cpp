#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d = 0; cin >> n;
    string s, l; char fig;
    vector <string> v;
    
    for(int i = 0; i < n; i++){
        cin >> s;
        sort(s.begin(), s.end()); string k; // abell
        for(int jojo = 0; jojo < s.size(); jojo++){ 

            if(s[jojo] == s[jojo + 1]){ // abell l = l
                continue;
            }
            else {
                k += s[jojo];  // abel
            }
        }
        v.push_back(k);
    }

    string first = v[0];
    vector <char> haha;
    for(int c = 0; c < first.size(); c++){
        d = 0;
        for(int i = 1; i < v.size(); i++){
            l = v[i];
            for(int j = 0; j < l.size(); j++){
                
                if(first[c] == l[j]){
                    d++;
                    break;
                }
            }
        }
        
        if(d == n - 1){
            fig = first[c];
        }
        if(d != n - 1){
            continue;
        }
        haha.push_back(fig);
    }

    if(haha.empty()){
        cout << "NO COMMON CHARACTERS";
    }

    else {
        for(int kok = 0; kok < haha.size(); kok++){
            cout << haha[kok] << " ";
        }
    }
}