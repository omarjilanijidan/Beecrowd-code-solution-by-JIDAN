#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i=1,j,n;
    cin>>x>>y;
    n=x;

    for(j=1;j<=y;j++,i++)
    {
        if(i==x)
        {
            x=x+n;

            cout<<j<<endl;
        }
        else
            cout<<j<<" ";
    }
    return 0;
}
