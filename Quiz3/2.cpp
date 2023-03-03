#include <bits/stdc++.h>
using namespace std;

bool IsDigit(unsigned char s){

    if('a' <= s && s <= 'z'){
        return false;
    }

    else {
        return true;
    }
}

int main(){
    unsigned char s;
    cin>>s;
    if(IsDigit(s)==true){
        cout<<"yes";
    }
    else {
        cout<<"no";
    }
}