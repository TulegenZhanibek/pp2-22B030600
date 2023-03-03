#include <bits/stdc++.h>
using namespace std;

int c[1001];
int main(){
    
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        c[a[i]]++;
    }

    int max = *max_element(c, c + 1000);
    for(int i = 1000; i >= 0; i--){

        if(c[i] == max){
            cout << i << " ";
        }
    }
}