#include <bits/stdc++.h>
using namespace std;

void Matrix(string s, int n, int m){
    cin >> s;
    cin >> n >> m;
    char a[n][m];
    int d = s.size();
    int c = 0;
    char D = 'D', R = 'R', U = 'U', L = 'L';

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] = 'X';
        }
    }
    
    int i = 0, j = 0;
    for(int c = 0; c <= s.size(); c++){
        a[i][j] = '*';

        if(s[c] == D){
            i++;
        }
        else if(s[c] == R){
            j++;
        }
        else if(s[c] == U){
            i--;
        }
        else if(s[c] == L){
            j--;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
}

int main(){
    string s;
    int n, m;
    Matrix(s, n, m);
}