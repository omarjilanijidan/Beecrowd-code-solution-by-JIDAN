#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int n,x,y;
    double sum=0;
    cin>>n;
    while(n-->0)
    {

        cin>>x>>y;
        if(x==1001)
        {
            sum=sum+(1.5*y);

        }
        else if(x==1002)
        {
            sum=sum+(2.5*y);

        }
        else if(x==1003)
        {
            sum=sum+(3.5*y);

        }
        else if(x==1004)
        {
            sum=sum+(4.5*y);

        }
        else if(x==1005)
        {
            sum=sum+(5.5*y);

        }

    }
    cout<<std::fixed;
    cout<<setprecision(2);
    cout<<sum<<endl;
    return 0;
}
