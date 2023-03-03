#include <bits/stdc++.h>
using namespace std;

int main(){
  int b,c=0;
  cin>>b;
  string a[b];
  for(int i=0;i<b;i++){
      cin>>a[i];
  }
  for(int i=0;i<b;i++){
      for(int j=0;j<a[i].size();j++){
        if(a[i][j]=='@'&&a[i][j+1]=='g'&&a[i][j+2]=='m'&&a[i][j+3]=='a'&&a[i][j+4]=='i'&&a[i][j+5]=='l'&&a[i][j+6]=='.'&&a[i][j+7]=='c'&&a[i][j+8]=='o'&&a[i][j+9]=='m'){
          c=1;
          break;
      }
      else c=0;
    }
    if(c==1){
      for(int j=0;j<a[i].size();j++){
        if(a[i][j]!='@'){
          cout<<a[i][j];
        }
        else break;  
      }cout<<endl;
    }
  }
}