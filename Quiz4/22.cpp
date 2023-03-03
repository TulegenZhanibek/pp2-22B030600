#include <bits/stdc++.h>
using namespace std;

double GetPriceQualityRatio(int price, int quality){

}

int main(){
    int n; cin >> n;
    vector <pair <string, pair<float, float> > > v;
    float a[n];

    for(int i = 0; i < n; i++){
        a[i] = 0;
    }
    
    for(int i = 0; i < n; i++){
        string a; cin >> a;
        int c, d; cin >> c >> d;
        v.push_back(make_pair(a, make_pair(c, d)));
    }

    for(int i = 0; i < n; i++){
        a[i] = v[i].second.second / v[i].second.first;
    }
    
    float max = a[0];
    string min = v[0].first;
    for(int i = 0; i < n; i++){
        
        if(a[i] > max){
            max = a[i];
            min = v[i].first;
        }
    }
    cout << min;
}