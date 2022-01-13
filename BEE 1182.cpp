#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int C,i,j,count;
    cin>>C;
    char A='S',B='M',O;
    cin>>O;
    double arr[12][12],sum=0;


    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
            cin>>arr[i][j];
    }


    for(i=0,j=C;i<12;i++,count++)
        sum=sum+arr[i][j];


    cout<<std::fixed;
    cout<<setprecision(1);
    if(O==A)
        cout<<sum<<endl;
    else if(O==B)
        cout<<sum/count<<endl;
    return 0;


}
