#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, x, c = 0;
    cin >> n >> k;
    vector <int> s;

    for(int i = 0; i < n; i++){
        cin >> x;
        s.push_back(x);
    }

    vector <int> :: iterator it;
    for(it = s.begin(); it != s.end(); it++){

        if(*it == k){
            c++;
        }
    }
    cout << c;
}