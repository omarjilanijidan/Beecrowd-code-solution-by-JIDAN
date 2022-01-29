#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a=1,b=0;
    cin>>n;
    n=n*n;
    if(n%2==0)
    {
        cout<<n/2<<" casas brancas e "<<n/2<<" casas pretas"<<endl;

    }

    else if(n%2!=0)
    {
        for(i=0;i<n;i++)
        {
            if(a+b==n)
            {
                cout<<a<<" casas brancas e "<<b<<" casas pretas"<<endl;
                break;
            }
            a++;
            b++;
        }
    }
    return 0;

}
