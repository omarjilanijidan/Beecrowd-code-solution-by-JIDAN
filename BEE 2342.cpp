#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,s=0;
    char c;
    cin>>n>>p>>c>>q;
    if(c=='+')
    {
        s=p+q;
        if(s<=n)
            cout<<"OK"<<endl;
        else
            cout<<"OVERFLOW"<<endl;
    }
    else if(c=='*')
    {
        s=p*q;
        if(s<=n)
            cout<<"OK"<<endl;
        else
            cout<<"OVERFLOW"<<endl;
    }
    return 0;


}
