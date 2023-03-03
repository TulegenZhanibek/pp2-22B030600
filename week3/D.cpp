#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, b, c = 0;
    cin >> n;
    b = pow(-10, 9);
    int array[n];

    for (int i = 0; n > i; i++){
        cin >> array[i];
    }
        for (int i = 0; n > i; i++){

            if (array[i] > b){
                b = array[i];   
                c = i + 1;
            }
        }
        cout << c;
            
    return 0;
}