#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; char c;
    cin >> s >> c;
    int k;

    for(int i = 0; i < s.size(); i++) {

        if(s[i] == c) {
            cout << i << " ";
            break;
        }
    }

    long sum = 0;
    for(int i = 0; i < s.size(); i++) {

        if(s[i] == c) {
            sum += 1;
        }
    }

    if(sum > 1) {

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == c) {
                k = i;

            }
        }
        cout << k;
    }
    return 0;
}