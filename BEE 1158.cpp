#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,y,i,sum1,sum2;
    cin>>n;
    while(n-->0)
    {
        cin>>x>>y;
        if(x%2==0  )
        {
            sum1=0;
            x=x+1;
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
