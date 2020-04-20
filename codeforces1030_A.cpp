#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x[100],cnt=0;
  cin>>n;
  for(int i=1; i<=n; i++)
  {
    cin>>x[i];
    if(x[i]==1)
    {
      cnt++;
    }
  }
  if(cnt)
  {
    cout<<"HARD"<<endl;
  }
  else
  {
    cout<<"EASY"<<endl;
  }

}
