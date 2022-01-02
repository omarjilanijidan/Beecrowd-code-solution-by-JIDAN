#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,sum=0,i;

    cin>>x>>y;
    if(x>y)
    {
        for(i=y;i<=x;i++)

        {
            if( i%13!=0 )
            {
                sum=sum+i;

            }
        }
    cout<<sum<<endl;

    }
    else if (y>x)
    {
        for(i=x;i<=y;i++)

        {
            if( i%13!=0 )
            {
                sum=sum+i;

            }
        }
    cout<<sum<<endl;

    }

    return 0;
}
