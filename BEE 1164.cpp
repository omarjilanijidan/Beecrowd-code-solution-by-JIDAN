#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,div=0,sum=0;
    cin>>n;
    while(n-->0)
    {
        cin>>x;
        sum=0;
        for(i=1;i<x;i++)
        {
            if(x%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==x)
        {
            cout<<x<<" eh perfeito"<<endl;
        }
        else if(sum!=x)
        {
            cout<<x<<" nao eh perfeito"<<endl;
        }

    }
    return 0;
}
