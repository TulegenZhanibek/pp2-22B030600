#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    int n, d = 0; cin >> n;
    char a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);
    for(int i = 0; i < n; i++){
        d = 0;
        for(int j = 0; j < s.length(); j++){

            if(s[j] == a[i]){
                d++;
            }
        }
        cout << a[i] << " - " << d;
        cout << endl;
    }
}