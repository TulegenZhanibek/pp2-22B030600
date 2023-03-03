/*#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    queue <char> q;

    for(int j = 0; j < s.size(); j++){
        
        if(q.empty()){
            q.push(s[j]);
        }
        else if(!q.empty()){
            
            if(s[j] == '1' && (q.front() == s[j] || q.back() != q.front())){
                continue;
            }
            else {
                q.push(s[j]);
            }
        }
    }
    
    while(!q.empty()){
        cout << q.front();
        q.pop();
    }
}*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    stack <char> n;
    int a = s.length();
    for(int i = a - 1 ; i >= 0; --i) {
        if(n.empty()) {
            n.push(s[i]);
        }
        else if(s[i] == '1' && s[i] == n.top()) {
            n.pop();
        }
        else {
            n.push(s[i]);
        }
    }

    int i = 0;
    
    while(!n.empty()) {
        cout << n.top();
        n.pop();
    }
}