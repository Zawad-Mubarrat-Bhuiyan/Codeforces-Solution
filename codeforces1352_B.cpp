#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  long long n,k;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    if(k>n)
    {
      cout<< "NO" <<endl;
    }
    else if(n%2==0)
    {
      if(n/2 >= k)
      {
        cout<< "YES" <<endl;
        for(int i=1; i<=k-1; i++)
        {
          cout<<2<<" ";
        }
        cout<< n-2*(k-1) <<endl;
      }
      else if(n/2 < k)
      {
        if(k%2 == 1)
        {
          cout<< "NO" <<endl;
        }
        else
        {
          cout<<"YES"<<endl;
          for(int i=1; i<=k-1; i++)
          {
            cout<<1<<" ";
          }
          cout<<n-(k-1)<<endl;
        }
      }
    }
    else if(n%2==1)
    {
      if((n-k+1)%2 == 0)
      {
        cout<<"NO"<<endl;
      }
      else
      {
        cout<<"YES"<<endl;
        for(int i=1; i<=k-1; i++)
        {
          cout<<1<<" ";
        }
        cout<<n-k+1<<endl;
      }
    }

  }
  return 0;
}
