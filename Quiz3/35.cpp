#include <bits/stdc++.h>
using namespace std;

/*int main(){
    int n, c, alpha = -100000;
    cin >> n;
    int a[n];
    int b[1000];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < 1000; i++){
        b[i] = 0;
    }

    for(int i = 0; i < n; i++){
        b[a[i]]++;
    }

    for(int i = 0; i < 1000; i++){

        if(b[i] > alpha){
            alpha = b[i];
        }
    }

    for(int i = 1000; i >= 1000; i--){
        
        if(b[i] == alpha){
            cout << i << " ";
        }
    }
}*/

int main() {
    int n,c;
    cin>>n;
    int arr[n];
    int moda = -100000;
    int b[1001];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < 1001;i++){
        b[i] = 0;
    }
    for (int i = 0; i < n;i++){
        b[arr[i]]++;
    }
    for (int i = 0; i < 1001;i++){
        if (moda < b[i]){
            moda = b[i];
        }
    }
    for (int i = 1001; i >= 0 ;i--){
        if (b[i] == moda){
           cout << i << " ";
        }
    }
}