#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n-->0)
    {
        int x,y;
        cin>>x>>y;
        int rafael=0,beto=0,carlos=0;
        rafael=((3*x)*(3*x)) + (y*y);
        beto = (2*(x*x)) + ((5*y)*(5*y));
        carlos = (-100*x)+(y*y*y);
        if(rafael>beto && rafael>carlos)
            cout<<"Rafael ganhou"<<endl;
        else if(beto>rafael && beto> carlos )
            cout<<"Beto ganhou"<<endl;
        else if(carlos>rafael && carlos>beto )
            cout<<"Carlos ganhou"<<endl;
    }
    return 0;
}
