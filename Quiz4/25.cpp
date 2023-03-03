#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    stack <int> q;

    for(int i = 0; i < n; i++){
        int a; cin >> a;

        if(q.empty()){
            q.push(a);
        }
        else if(!q.empty()){
            if(q.top() == a){
                q.pop();
            }
            else {
                q.push(a);
            }
        }
    }

    while(!q.empty()){
        cout << q.top();
        q.pop();
    }
}