#include <bits/stdc++.h>
using namespace std;

pair< int , int > d;
int Distance(pair<int , int> p) {
    double a = pow(p.first - d.first, 2);
    double b = pow(p.second - d.second , 2);
    double c = a + b;
    return c;
}

bool comp(pair<int , int> p, pair <int , int > f) {
    // if(Distance(p) == Distance(f)) {
    //     return p.second < f.second;
    return Distance(p) < Distance(f);
    
}

int main() {
    int x1, y1;
    cin >> x1 >> y1;
    d.first = x1;d.second = y1;
    int n; cin >> n;
    vector<pair<int , int> > v;
    while (n--)
    {
        int x2,y2; cin >> x2 >> y2;
        v.push_back(make_pair(x2, y2));
    }

    sort(v.begin(), v.end(), comp);
    vector <pair <int, int> > :: iterator it = v.begin();
    for( ; it != v.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}