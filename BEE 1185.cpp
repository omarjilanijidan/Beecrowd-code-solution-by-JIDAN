#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    char a='S',b='M',O;
    cin>>O;
    int i , j ,k=11,count=0;
    float arr[12][12],sum=0;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=0;i<12;i++)
    {


        for(j=0;j<k;j++,count++)

            sum=sum+arr[i][j];
            k--;
    }

    cout<<std::fixed;
    cout<<setprecision(1);
    if(O==b)
        cout<<sum/count<<endl;
    else if(O==a)
        cout<<sum<<endl;
    return 0;

}
