#include<iostream>
using namespace std;
int main()
{
    int n,m,i;
    while(cin>>n>>m)
    {
        if(n<=0 || m<=0)
        {
            break;
        }
        else if(n>m)
        {
            int sum=0;
            for(int i=m;i<=n;i++)
                cout<<i<<" ";
            for(int i=m;i<=n;i++)
                sum=i+sum;
                cout<<"Sum="<<sum<<endl;


        }
        else if(n<m)
        {
            int sum=0;
            for(int i=n;i<=m;i++)
                cout<<i<<" ";
            for(int i=n;i<=m;i++)
                sum=i+sum;
                cout<<"Sum="<<sum<<endl;


        }
    }
    return 0;
}
