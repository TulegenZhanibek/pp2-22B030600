#include <bits/stdc++.h>
using namespace std;

void alone(){
    string s;
    cin >> s;
    int start = 0, end = 0, startmax = 0, endmax = 1, max;

    for(int i = 0; i < s.length(); i++){
        
        if(s[i] == ' ' || s[i] == '\0'){
            
            end = i;
            if(s[end] > max && s[start] < max){
                s[max] = s[end];
            }
            start = end + 1;
        }
    }

    for(int i = start; i < end; i++){
        cout << s[max];
    }
}

int main(){
    alone();
}