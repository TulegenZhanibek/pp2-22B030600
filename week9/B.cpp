#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> s;
    int x;

    for(int i = 0; i < n; i++){
        cin >> x;
        s.push_back(x);
    }
    
    vector <int> :: iterator it;
    sort(s.begin(), s.end());
    for(it = s.end() - 1; it != s.begin() - 1; --it){
        
        if((*it) % 2 == 0){
            cout << *it << " ";
        }
    }
    
    for(it = s.begin(); it != s.end(); ++it){
        
        if((*it) % 2 == 1){
            cout << *it << " ";
        }
    }
}