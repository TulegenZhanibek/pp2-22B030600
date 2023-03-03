#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, i = 1, c = 1, d = 1;
    cin >> N;
    
    while(N > i){
        i++;

        if(N == i){
            c++;
        }
        else if(N != 0){
            N -= i;
            c++;
        }
    }
    if(c % 2 == 0){
        cout << "Nelson";
    }
    else {
        cout << "Bob";
    }
}