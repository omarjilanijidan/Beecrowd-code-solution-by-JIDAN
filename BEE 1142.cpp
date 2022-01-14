#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=1,k=3,i,j;
    cin>>n;

    while(n-->0)
    {
        for(i=m;i<=k;i++)
            cout<<i<<" ";
            m=k+2;
            k=k+4;
        cout<<"PUM";
        cout<<endl;
    }



    return 0;
}

