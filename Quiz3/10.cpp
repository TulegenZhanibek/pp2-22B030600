#include <bits/stdc++.h>
using namespace std;

void Mal(){
    string s, c;
    cin >> s >> c;
    int d = 0;

    for(int i = 0; i < s.length(); i++){
        d = 0;
        for(int j = 0; j < c.length(); j++){

            if(c[j] == s[i]){
                d += 1;
                
            }
        }
    }
    cout << d;
    /*if(d > 0){
        cout << "yes";
    }
    
    else {
        cout << "no";
    }*/
}

int main(){
    Mal();
}