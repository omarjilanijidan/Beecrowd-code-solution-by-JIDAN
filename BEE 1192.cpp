#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char x,y,z;
        cin>>x>>y>>z;
        x=x-'0';
        z=z-'0';
        if(x==z)
            cout<<x*z<<endl;
        else if(int(y)>=32 && int(y)<=90)
            cout<<z-x<<endl;
        else
            cout<<z+x<<endl;

    }
    return 0;
}

//97 122
//32 90
