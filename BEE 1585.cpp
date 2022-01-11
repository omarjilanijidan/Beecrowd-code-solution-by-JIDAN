#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,equation=0;
    cin>>n;
    while(n-->0)
    {
        cin>>x>>y;
        equation=(x*y)/2;
        cout<<equation<<" cm2"<<endl;
    }
    return 0;
}
