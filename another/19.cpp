#include <bits/stdc++.h>
using namespace std;

bool Election(bool x, bool y, bool z){
    cin >> x >> y >> z;

    if(!x && !y && !z){
        return false;
    }

    else if(!x && !y && z){
        return false;
    }

    else if(!x && y && !z){
        return false;
    }

    else if(x && !y && !z){
        return false;
    }

    else {
        return true;
    }
}

int main(){
    bool x, y, z;
    cout << Election(x, y, z);
}