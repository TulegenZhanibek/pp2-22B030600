/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s, l;
    vector <string> v;

    for(int i = 0; i < n; i++){
        cin >> s;
        v.push_back(s);
    }

    for(int i = 0; i < v.size(); i++){
        l = v[i];
        for(int j = 0; j < l.size(); j++){
            cout << l[j] << " ";
        }
        cout << endl;
    }
}*/

#include <bits/stdc++.h>
using namespace std;
int min(int a, int b) {
    if (a < b) return a;else return b;
}
int main() {
    int a,b,c; cin >> a >> b >> c;
    vector<int> v;
    for(int i = 1; i <= min(a,b); i++) {
        if(a % i == 0 && b % i == 0) {
            v.push_back(i);
        }
    }
    cout << v[v.size() - c];
}