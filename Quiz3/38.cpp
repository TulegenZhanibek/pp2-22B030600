#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c,x,s1,s2;
	cin>>n>>c>>x;
	if(x==1){
		while(n<=c){
			s1=sqrt(n);
			if(s1*s1==n){
				cout<<s1*s1<<" ";
			}
			n++;
		}
	}
	
	else if(x==-1){
		while(c>=n){
			s2=sqrt(c);
			if(s2*s2==c){
				cout<<s2*s2<<" ";
			}
			c--;
		}
	}
}