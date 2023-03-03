#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <pair <int, int> > s;
    int c, m;

    for(int i = 0; i < n; i++){
        cin >> c >> m;
        s.push_back(make_pair(c, m));
    }

    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        cout << s[i].first << " " << s[i].second;
        cout << endl;
    }
}