#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,i,x,max;
    while(cin>>n)
    {
        max=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x>max)
            {
                max=x;
            }
        }
        if(max>=20)
        {
            cout<<"3"<<endl;
        }
        else if(max>=10 && max<20)
        {
            cout<<"2"<<endl;
        }
        else if(max<10)
        {
            cout<<"1"<<endl;
        }

    }
    return 0;

}


