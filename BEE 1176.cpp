#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x=0,y=1,c,sum=0;
    cin>>n;
    while(n-->0)
    {

        cin>>c;

        for(int i=2;i<=c;i++)
        {

            sum=x+y;
            x=y;
            y=sum;
        }
        if(c==1)
            cout<<"Fib("<<c<<") = "<<"1"<<endl;
        else
            cout<<"Fib("<<c<<") = "<<sum<<endl;
        sum=0;
        x=0;
        y=1;
    }
    return 0;
}
