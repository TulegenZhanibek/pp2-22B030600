#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, k, d;
    string a, b, c;
    a = "8717";
    b = "87272";
    c = "87273";
    cin >> s;
    for(int i = 0; i < s.length(); i++){

        if(i < 4){
            d += s[i];
        }
    }
    for(int i = 0; i < s.length(); i++){

        if(i < 5){
            k += s[i];
        }
    }

    if(a == d){
        cout << "Astana";
    }
    
    else if(b == k || c == k){
        cout << "Almaty";
    }
}