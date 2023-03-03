#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, k;
    getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        
        if(s[i] == ' '){
            int j = i + 1;

            while(s[j] == ' '){

                if(s[j] == ' '){
                   s.erase(j, 1);
                }
            }
        }
    }
    cout << s;
}