#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0;
    cin>>n;
    long long int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        while(true)
        {
            if(ar[i]%3==0)
                break;
            if(ar[i]%3!=0)
            {
                ar[i]--;
            }
        }
        sum=sum+ar[i];
    }

    cout<<sum<<endl;
    return 0;
}
