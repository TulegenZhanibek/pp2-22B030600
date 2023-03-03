#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int n, d;
    n = s.size();
    int a[n];

    for(int i = 0; i < n; i++){
        a[i] = 0;
    }
    
    for(int i = 0; i < s.size(); i++){
        d = 1;
        for(int j = i; j < s.size(); j++){

            if((s[i] == s[j]) && s[j] == s[j + 1]){
                d++;
            }
            else {
                break;
            }
        }
        a[i] = d;
    }
    int max = a[0];
    char min = s[0];
    for(int i = 0; i < n; i++){
        //cout << a[i] << " ";
    //}
        if(a[i] > max){
            max = a[i];
            min = s[i];
        }
    }
    cout << min << " " << max;
}