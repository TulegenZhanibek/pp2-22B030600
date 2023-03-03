#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j;
	cin >> n;
	long a[n][n];
	
	for (int i = 0; i < n; i++){	
		for (int j = 0; j < n; j++){
		    cin >> a[i][j];
		}
	}
	
	long max = a[0][0];
	long min = a[0][0];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
		    
		     if (a[i][j] > max){
		     min = max;
		     max = a[i][j];
			}
				
		     else if ((min < a[i][j]) && (a[i][j] < max)){
			 min = a[i][j];
		    }
	    }
	}
		if (a[i][j] == a[i + 1][j + 1]){
		    cout << 0;
		    return 0;
	    }
	cout << min;
}
