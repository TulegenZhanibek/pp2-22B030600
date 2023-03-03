#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;
  long int s_size = s.size() + 1;
  long int id = 1;
  long int ib = s_size - 2;
  
  s_size = s_size / 2 + 1;
  
  bool plndrm = true;
  
  for(int i = 1; i <= s_size-1; i++)
  {
    if(s[id] != s[ib])
      plndrm = false;
    
    if(s[id] != s[ib] && i == s_size)
      plndrm = false;
    
    id++;
    ib--;
  }
  
  long int s_size1 = s.size();
  
  long int id1 = 0;
  long int ib1 = s_size1 - 1;
  
  s_size1 = s_size1 / 2 + 1;
  
  bool plndrm1 = true;
  
  for(int i = 0; i <= s_size1-1; i++)
  {
    if(s[id1] != s[ib1])
      plndrm1 = false;
    
    if(s[id1] != s[ib1] && i == s_size1)
      plndrm1 = false;
    
    id1++;
    ib1--;
  }
  
  if((plndrm != plndrm1) && (plndrm == true || plndrm1 == true))
    cout << "YES";
  else
    cout << "NO";
}