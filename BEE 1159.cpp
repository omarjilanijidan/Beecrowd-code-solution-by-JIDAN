#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,sum1,sum2;

    while(true)
    {
        cin>>x;

        if(x==0)
        {
            break;

        }

        else if( x%2==0  )
        {
            sum1=0;
            int y=5;

            while(y-->0 )
            {
                sum1=sum1+x;
                x=x+2;

            }
            cout<<sum1<<endl;

        }


        else if(x%2!=0 )
        {
            sum2=0;
            int y=5;

            x=x+1;
            while(y-->0)

            {
                sum2=sum2+x;
                x+=2;

            }

            cout<<sum2<<endl;
        }




    }
    return 0;

}
