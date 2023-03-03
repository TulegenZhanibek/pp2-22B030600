#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr1[a];

    for (int i = 0; i < a; i++)
        cin >> arr1[i];

        int b;
        cin >> b;
        int arr2[b];
        for (int i = 0; i < b; i++)
            cin >> arr2[i];
    
            int arr3[a + b];
            for (int i = 0; i < a; i++)
                arr3[i] = arr1[i];

                for (int i = a, n = 0; n < b; i++, n++)
                    arr3[i] = arr2[n];

                    sort (arr3, arr3 + (a + b));
                    for (int i = 0; i < (a + b); i++)
                        cout << arr3[i] << " ";

}