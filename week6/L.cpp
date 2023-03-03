#include<bits/stdc++.h>
using namespace std;
void naiti(int n, string s){
    int sum = 0,d;
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            sum++;
        }
        else if(!(isdigit(s[i]))){
            sum = 0;
        }
        if(sum >= n){
            d = 1;
            break;
        }
        else{
            d = 0;
        }
    
    }
    if(d == 1){
        cout<<"Valid";
    }
    else{
        cout<<"Not valid";
    }

}
int main(){
    string s;
    int n;
    cin>>s>>n;
    naiti(n,s);
}