#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x;
    cin>>n;
    while(n-->0)
    {
        cin>>x;
        int count=0;

        for(i=2;i<x;i++)
        {
            if(x%i==0)
            {
                count++;
            }

        }
        if(count==0)
            cout<<x<<" eh primo"<<endl;
        else
            cout<<x<<" nao eh primo"<<endl;

    }
    return 0;


}

