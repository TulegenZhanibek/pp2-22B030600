#include <bits/stdc++.h>
using namespace std;

void Ernurpidoras(string s){
    int x = 0, y = 0;
    cin >> s;
    char R = 'R', L = 'L', F = 'F', B = 'B';
    for(int i = 0; i < s.size(); i++){

        if(s[i] == R){
            x += 1;
        }
        else if(s[i] == L){
            x -= 1;
        }
        else if(s[i] == F){
            y += 1;
        }
        else if(s[i] == B){
            y -= 1;
        }
    }

    while(y != 0){

        if(y > 0){
            y -= 1;
            cout << "B";
        }
        else if(y < 0){
            y += 1;
            cout << "F";
        }
    }
    
    while(x != 0){

        if(x > 0){ 
            x -= 1;
            cout << "L";
        }
        else if(x < 0){
            x += 1;
            cout << "R";
        }
    }
}

void Up(){
    int a, b;
    cin >> a >> b;
    cout << a + b;
}

int main(){
    string s;
    //Ernurpidoras(s);
    Up();
}