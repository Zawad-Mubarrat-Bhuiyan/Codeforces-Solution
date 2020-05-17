#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,cnt0=0,cnt1=0,cnt2=0,cnt3=0,totalcounteven=0,totalcountodd=0;
  cin>>n;
  int a[2*n];
  for(int i=0; i<2*n; i++)
  {
    cin>>a[i];
  }
  for(int i=0; i<2*n; i+=2) //even
  {
    if(a[i]==0)
    {
      cnt0++;
    }
    if(a[i]==1)
    {
      cnt1++;
    }
  }
  if(cnt0 > cnt1)
  {
    totalcounteven = cnt1;
  }
  else
  {
    totalcounteven = cnt0;
  }
  for(int i=1; i<2*n; i+=2) //odd
  {
    if(a[i]==0)
    {
      cnt2++;
    }
    if(a[i]==1)
    {
      cnt3++;
    }
  }
  if(cnt2 > cnt3)
  {
    totalcountodd = cnt3;
  }
  else
  {
    totalcountodd = cnt2;
  }
  cout<<totalcounteven + totalcountodd<<endl;
}
