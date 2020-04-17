#include<iostream>
using namespace std;
int main()
{
    int n,m,cnt=0;
    char s;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>s;
            if(s == 'C' || s == 'M' || s == 'Y')
            {
                cnt=1;
                break;
            }
        }
        if(cnt==1)
            break;
    }
    if(cnt == 1)
    {
        cout<<"#Color"<<endl;
    }
    else
    {
        cout<<"#Black&White"<<endl;
    }
    return 0;

}
