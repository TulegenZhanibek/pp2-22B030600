#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int sum = 0, first;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        s[i] -= 48;
        sum += s[i];
        //first = s[s.length() - s.length()];
        first = s[0];
    }

    /*if(first == sum - first || first == (sum - first) % 10){
        cout << "YES";
    }

    else {
        cout << "NO";
    }*/
    cout << first;
}