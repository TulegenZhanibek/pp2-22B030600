#include <bits/stdc++.h>
using namespace std;

struct krash{
    string pudge;
};

int main(){
    krash joni;
    cin >> joni.pudge;

    if(joni.pudge == "MON"){
        cout << 6;
    }
    else if(joni.pudge == "TUE"){
        cout << 5;
    }
    else if(joni.pudge == "WED"){
        cout << 4;
    }
    else if(joni.pudge == "THU"){
        cout << 3;
    }
    else if(joni.pudge == "FRI"){
        cout << 2;
    }
    else if(joni.pudge == "SAT"){
        cout << 1;
    }
    else if(joni.pudge == "SUN"){
        cout << 7;
    }
}