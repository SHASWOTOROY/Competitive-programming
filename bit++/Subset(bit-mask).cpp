#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int lim=(1<<n)-1;
    for(int j=1; j<=lim; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(j&(1<<i))
            {
                cout<<arr[i]<<" ";

            }
        }
        cout<<endl;
    }

}