#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,k,t,x;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    x = (k-1)/(n-1);
    cout<< x + k <<endl;
  }
  return 0;
}
