#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,sum=1;
    cin>>n;
    for(i=1;i<n;i++)
    {
        j=n-i;
        sum=j*sum;

    }
    cout<<sum*n<<endl;
    return 0;
}
