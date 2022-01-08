#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x,count1=0,count2=0;
    while(true)
    {
        cin>>n;
        if(n==0)
            break;
        count1=0;
        count2=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x==0)
            {
                count1++;
            }
            else if(x==1)
            {
                count2++;
            }
        }
        cout<<"Mary won "<<count1<<" times and John won "<<count2<<" times"<<endl;
    }
    return 0;
}
