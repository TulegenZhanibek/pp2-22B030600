#include <bits/stdc++.h>
using namespace std;

bool Xor(bool x, bool y){
    cin >> x >> y;
    
    if(!x && y){
        return true;
    }

    else if(x && !y){
        return true;
    }

    else {
        return false;
    }
}

int main(){
    bool x, y;
    cout << Xor(x, y);
}