#include<bits/stdc++.h>
using namespace std;
int main()
{
  int cntb=0,cnts=0;
  string s;
  while(cin>>s)
  {
    for(int i=0; i<s.size(); i++)
    {
      if(s[i] >= 65 && s[i] <= 90)
      {
        cntb++;
      }
    }
    for(int i=0; i<s.size(); i++)
    {
      if(s[i] >= 97 && s[i] <= 122)
      {
        cnts++;
      }
    }
    if(cntb>cnts)
    {
      for(int i=0; i<s.size(); i++)
      {
        putchar(toupper(s[i]));
      }
      cout<<endl;
    }
    else if(cntb<=cnts)
    {
      for(int i=0; i<s.size(); i++)
      {
         putchar(tolower(s[i]));
      }
      cout<<endl;
    }
  }
  return 0;
}
