#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=1,count=1,x=0,y=1;
    cin>>n;
    cout<<x<<" "<<y<<" ";
    for(int i=2;i<n;i++)
    {
        sum=x+y;
        if(i==(n-1))
            cout<<sum<<endl;
        else
            cout<<sum<<" ";

        x=y;
        y=sum;
    }
    return 0;

}
