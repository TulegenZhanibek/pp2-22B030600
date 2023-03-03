#include <bits/stdc++.h>
using namespace std;

string strToBool(string str){
    
    for(int i = 0; i < str.size(); i++){

        if(str.size() == 1){

            if(str[i] == '1'){
                cout << true;
            }
            else {
                cout << false;
            }
        }
        
        else {
            cout << str[i];
        }
    }
}

int main(){
    string str; cin >> str;
    strToBool(str);

}