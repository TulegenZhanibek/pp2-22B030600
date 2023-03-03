#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n % 2 == 1){
        cout << "Super";
    }
    else if (n >= 2 && n <= 5 && n % 2 == 0){
        cout << "Not Super";
    }
    else if (6 <= n && 20 >= n && n % 2 == 0){
        cout << "Super";
    }
    else if (n % 2 == 0 && n >= 20){
        cout << "Not Super";
    }


    

}  