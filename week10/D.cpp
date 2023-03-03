#include <bits/stdc++.h>
using namespace std;

int f(vector <int> v){
    int sum = 0;

    for(int i = 0; i < v.size(); i++){
        sum += v[i];
    }
    return sum;
}

bool fg(vector <int> v1, vector <int> v2){

    if(f(v1) < f(v2)) return true;

    if(f(v1) == f(v2)){
        if(v1.size() < v2.size())return true;
        if(v1.size() == v2.size()){
            for(int i = 0; i < v1.size(); ++i){
                if(v1[i] > v2[i])return false;
            }
            return true;
        }
    }
    return false;
}

int main(){
    int n; cin >> n;
    vector <vector <int> > v;
    int g, h;

    for(int i = 0; i < n; i++){
        cin >> g;
        vector <int> k;
        k.push_back(g);
        
        for(int j = 0; j < g; j++){
            cin >> h;
            k.push_back(h);
        }
        v.push_back(k);
    }

    sort(v.begin(), v.end(), fg);
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= v[i][0]; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}