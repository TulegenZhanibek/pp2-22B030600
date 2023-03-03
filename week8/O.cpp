#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    vector <char> v(s.begin(), s.end());
    
    int d = 0;
    for(int i = 0; i < v.size(); i++){

        if('A' <= v[i] && v[i] <= 'Z'){
            v[i] += 32;
        }
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){

        if(v[i] == v[i + 1]){
            continue;
        }
        d++;
    }
    cout << d << endl;
    
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        
        if(v[i] == v[i + 1]){
            continue;
        }
        cout << v[i] << " ";
    }
}