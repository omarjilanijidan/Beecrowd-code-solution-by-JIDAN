#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,mx,pos;
    int n;
    mx=0;
    pos=0;
    for(i=1;i<=100;i++)
    {
        cin>>n;
        if(n>mx)
        {
            mx=n;
            pos=i;
        }
    }
    cout<<mx<<endl;
    cout<<pos<<endl;
    return 0;
}
