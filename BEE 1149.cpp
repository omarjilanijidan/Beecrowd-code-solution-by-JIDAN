#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,sum=0;
    cin>>a;
    while(true )
    {
        cin>>n;
        if(n>0)
            break;
    }

    for(int i=0;i<n;i++)
    {
        sum=sum+i+a;
    }
    cout<<sum<<endl;
    return 0;
}
