#include<bits/stdtr1c++.h> 
using namespace std; 
int main() 
{ 
    int n, max, min; 
    cin >> n; 
    int arr[n]; 
    for (int i = 0; i < n; i++){
        cin >> arr[i]; 
    } 
        max = arr[0]; 
        int nmax = 0; 
        for(int i = 0; i < n; i++){ 

            if (max < arr[i]){ 
                max = arr[i]; 
                nmax = i; 
            }
        }
            min = arr[0]; 
            int nmin = 0; 
            for (int i = 0; i < n; i++){ 

                if (min > arr[i]){ 
                    min = arr[i]; 
                    nmin = i; 
                }
            } 
                for (int i = 0; i < n; i++){ 

                    if (i == nmax){ 
                    cout << arr[nmin] << " "; 
                    } 
                        else { 
                            cout << arr[i] << " "; 
                        } 
                } 
}
                