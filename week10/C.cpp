#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int a, b;
    stack <int> k;
    for(int i = 0; i < s.size(); i++){

        if(k.empty()){
            k.push(s[i] - 48);
        }
        else if(!k.empty()){
            a = (k.top() * 10) + (s[i] - 48);
            b = sqrt(a);
            if(b * b == a){
                k.pop();
            }
            else {
                k.push(s[i] - 48);
            }
        }
    }
    if(k.empty()){
        cout << "Stack is empty";
    }
    else {
        while(!k.empty()){
            cout << k.top();
            k.pop();
        }
    }
}