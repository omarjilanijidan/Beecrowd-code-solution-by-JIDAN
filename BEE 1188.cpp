#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    char A='S',B='M',O;
    cin>>O;
    int i,j,k=1,m=11,count=0;
    double arr[12][12],sum=0,div=0;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
            cin>>arr[i][j];
    }

    for(i=11;i>0;i--)
    {
        for(j=k;j<m;j++,count++)
            sum=sum+arr[i][j];
            k++;
            m--;


    }
    cout<<std::fixed;
    cout<<setprecision(1);
    div=sum/count;
    if(O==A)
        cout<<sum<<endl;
    else if(O==B)
        cout<<div<<endl;
    return 0;
}
