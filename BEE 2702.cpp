#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i=0,j=0,k=0,total;
    int x,y,z;
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    if(a<x || b<y || c<z )
    {
        if(a<x)
            i=x-a;
        if( b<y )
            j=y-b;
        if( c<z )
            k=z-c;
        total=i+j+k;
        cout<<total<<endl;

    }
    else if(a==x && b==y && c==z)
    {

        cout<<"0"<<endl;
    }
    else if(a>x && b>y && c>z)
    {

        cout<<"0"<<endl;
    }




    return 0;


}
