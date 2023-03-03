#include <bits/stdc++.h>

using namespace std;

int n;

void bin(int n){
	if(n == 0) return;
	
	bin(n/2);
	
	cout << n % 2;
}

int main(){
    string s;
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
    	if(isdigit(s[i])){
    		n += s[i] - '0';
    		
    		if(isdigit(s[i + 1])){
    			n *= 10;
    			continue;
    		}
    		
    		bin(n);
    		n = 0;
    		continue;
		}
		
		cout << s[i];
		
	}
}