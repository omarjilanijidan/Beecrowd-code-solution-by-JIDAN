#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,div=0;
    cin>>x>>y;
    if(x<y)
    {
        for(i=x+1;i<y;i++)
        {
            if((i%5)==2 || (i%5)==3  )
            {

                cout<<i<<endl;

            }

        }

    }
    else if(y<x)
    {
        for(i=y+1;i<x;i++ )
        {
            if((i%5)==2 || (i%5)==3 )
            {

                cout<<i<<endl;

            }

        }

    }
    return 0;

}
