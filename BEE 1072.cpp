#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,in=0,out=0;
    cin>>n;
    while(n-->0)
    {
        cin>>x;
        if(x>=10 && x<=20)
        {
            in++;
        }
        if(x<10 || x>20)
        {
            out++;
        }
    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
    return 0;
}
