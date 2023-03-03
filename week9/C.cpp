#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c= 0; cin >> n;
    map <int, int> s;

    for(int i = 0; i < n; i++){
        int x; cin >> x; // 0 + 1 = 1 
        s[x]++;
        
    }
    map <int, int> :: iterator it;
    for(it = s.begin(); it != s.end(); it++){
        cout << it -> second << " ";
    }

    cout << endl;

    for(it = s.begin(); it != s.end(); it++){

        if(it -> second > 1){
            c++;
        }
    }
    cout << c;
}