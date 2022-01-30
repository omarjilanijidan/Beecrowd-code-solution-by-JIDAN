#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,count1=0,count2=0;
    while(true)
    {
        cin>>n;
        if(n==0)
            break;
        while(n-->0)
        {
            cin>>a>>b;
            if(a>b)
                count1++;
            else if(b>a)
                count2++;
        }
        cout<<count1<<" "<<count2<<endl;
        count1=0;
        count2=0;
    }

    return 0;
}
