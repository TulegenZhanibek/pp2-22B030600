/*#include <bits/stdc++.h>
using namespace std;

int f(){
    int a;
    static long n;
    if(abs(n) > 2){

        for(int i = 2; i < abs(n); i++){
            
            if(abs(n) % 2 == 0){
                continue;
            }
            else {
                a = n;
            }
        }
    }
    n++;
    return a;
}

int main(){
    int n, b; cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.push_back(abs(a));
    }
    
    b = count(v.begin(), v.end(), f);
    cout << b;
}*/

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main() {
    int n; cin >> n;
    vector<int> v;
    while (n--)
    {
        int a; cin >> a;
        v.push_back(a);
    }
    int vnt = 0;
    vector<int> :: iterator it = v.begin();
    for(; it != v.end(); ++it) {
        if(isPrime(abs(*it)) == true) {
            vnt++;
        } 
    }
    cout << vnt;
}