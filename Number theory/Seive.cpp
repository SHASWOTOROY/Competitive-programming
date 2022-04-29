#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mark[n+2]= {};
    for(int i=2; i<n; i++)
    {
        if(mark[i]==0)
        {
            for(int j=2*i; j<=n; j=j+i)
            {
                mark[j]=1;
            }

        }
    }
    for(int i=2; i<=n; i++)
    {
        if(mark[i]==0)
        {
            cout<<i<<" ";
        }
    }


}
