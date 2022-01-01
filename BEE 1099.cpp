#include<iostream>
using namespace std;
int main()
{
    int n,x,y,i;
    cin>>n;
    while(n-->0)
    {
        cin>>x>>y;
        if(x>y)

        {
            int sum=0;
            for(i=y;i<x;i++)

            {
                if(i%2!=0 && i!=y)
                    sum=sum+i;
            }
            cout<<sum<<endl;

        }
        else if(y>x)

        {
            int sum=0;
            for(i=x;i<y;i++)
            {
                if(i%2!=0 && i!=x)
                    sum=sum+i;
            }
            cout<<sum<<endl;

        }
        else if(y==x)

        {
            cout<<x-y<<endl;
        }
    }
    return 0;
}
