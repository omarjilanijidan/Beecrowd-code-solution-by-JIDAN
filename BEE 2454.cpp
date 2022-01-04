#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q;
    cin>>p>>q;
    if(p>0 && q>0 && q!=0 )
    {
        cout<<"A"<<endl;
    }
    else if(p>0 && q==0)
    {
        cout<<"B"<<endl;
    }
    else if(p>=0 && q>=0 )
    {
        cout<<"C"<<endl;
    }
    return 0;
}
