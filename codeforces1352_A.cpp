#include<bits/stdc++.h>
using namespace std;

vector<string> v;

int main()
{
  int t;
  string str, num;
  cin>>t;
  while(t--)
  {
    cin>>str;
    v.clear();
    for(int i=0; i<str.size(); i++)
    {
      if(str[i] != '0')
      {
        num = "";
        num += str[i];
        for(int j=i+1; j<str.size(); j++)
        {
          num += '0';
        }
        v.push_back(num);
      }
    }
    cout<< v.size() <<endl;
    for(int i=0; i<v.size(); i++)
    {
      cout<< v[i] << " ";
    }
    cout<<endl;
  }
  return 0;
}
