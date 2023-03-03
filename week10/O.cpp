#include <bits/stdc++.h>
using namespace std;


string toBinary(string s){
    int number; string result;
    number = stoi(s);

    while(number != 0){
        result = (number % 2 == 0 ? '0' : '1') + result;
        number /= 2;
    }
    cout << result << endl;
}

int main(){
    int n; cin >> n;
    vector <string> v;

    for(int i = 0; i < n; i++){
        string a; cin >> a;
        v.push_back(a);
    }

    for_each(v.begin(), v.end(), toBinary);
}