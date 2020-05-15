#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  long double avg,result=0;
  cin>>n;
  int p[n];
  for(int i=0; i<n; i++)
  {
    cin>>p[i];
  }
  for(int i=0; i<n; i++)
  {
    result += p[i];
  }
  avg = result/n;
  cout<< avg <<endl;
}
