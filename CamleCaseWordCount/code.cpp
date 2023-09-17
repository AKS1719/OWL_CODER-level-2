#include<bits/stdc++.h>

using namespace std;

bool isUpper(char ch)
{
    if(ch>='A' and ch<='Z')return true;
    return false;
}

int main()
{
  string s;
  cin >>s;
  int c=1;
  for(int i=1;i<s.size();i++)
  {
      if(isUpper(s[i])c++;
  }
  cout<<c;
}
