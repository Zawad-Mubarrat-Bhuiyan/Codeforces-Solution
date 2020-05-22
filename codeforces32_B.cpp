#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  for(int i=0; i<s.size(); i++)
  {
    if(s[i] == '.')
    {
      cout<<"0";
      continue;
    }
    else if(s[i] == '-' && s[i+1] == '.')
    {
      cout<<"1";
      i++;
      continue;
    }
    else if(s[i] == '-' && s[i+1] == '-')
    {
        cout<<"2";
        i++;
        continue;
    }
  }
  return 0;
}
