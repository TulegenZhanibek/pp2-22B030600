/*#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    vector <string> v;

    for(int i = 0; i < s.size(); i++){
        
    }
}*/

#include <bits/stdc++.h>
using namespace std;
bool polindrome(vector<char> v) {
    for(int i  = 0,j = v.size() - 1; i < v.size(),j >= 0; i++, j--) {
        if(v[i] != v[j]) {
            return false;
        }
    }    
    return true;
}
int main () {
    string s;cin >> s;
    vector<char> v;
    for(int i = 0; i < s.size(); i++) {
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    do {
        if(polindrome(v)) {
                cout << "ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
        
    }while(next_permutation(v.begin(), v.end()));
    cout << "JOJO";
}