#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    char A='S',B='M',O;
    cin>>O;
    int i,j,k=11,m=0,count=0;
    double arr[12][12],sum=0;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
            cin>>arr[i][j];
    }
    for(i=1;i<=5;i++)
    {
        for(j=k;j<=11;j++,count++)
            sum=sum+arr[i][j];
            k--;
    }
    if(i=5)
    {
        k=7;
        for(i=6;i<11;i++)
        {
            for(j=k;j<=11;j++,count++)
                sum=sum+arr[i][j];
                k++;
        }
    }
    cout<<std::fixed;
    cout<<setprecision(1);
    if(O==A)
        cout<<sum<<endl;
    else if(O==B)
        cout<<sum/count<<endl;
    return 0;
}
