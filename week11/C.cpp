#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
bool f(pair<string, double> v1,pair<string, double>  v2){
    if(v1.second >v2.second)return true;
    if(v1.second == v2.second){
        if(v1.first > v2.first)return true;
    }
    return false;
}
int main(){
    double n,x,z = 0;
    string s;
    cin >> n;
    vector<pair<string, double> > v;
    map<string, double> m;
    for(int i = 0; i < n; ++i){
        cin >> s >> x;
        m[s] += x;
        z += x;
    }
     map<string, double>:: iterator it;    
    for(it = m.begin(); it != m.end(); ++it){ 
        v.push_back(make_pair((*it).first, (*it).second)); 
    }
    sort(v.begin(), v.end(), f);
    for(int i = 0; i < v.size(); ++i){ 
        cout <<  v[i].first << " " <<  v[i].second / z * 100 << '%' << endl;
    }
}