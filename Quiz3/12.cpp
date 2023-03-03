#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
        string k , max;
        max = ' ';
        k = ' ';
    for(int i = 0; i < s.length(); i++){

        if(s[i] != ' '){
            k += s[i];
        }
        if(s[i] == ' '){

            if(k > max){
                max = k;
            }
            k = ' ';
        }
    }
    cout << max;
}