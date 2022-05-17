#include<bits/stdc++.h>
using namespace std;



int main()
{

    int n,m;
    while(cin>>n>>m)
    {
        long long int fac=1 ;
        long long int fac1=1 ;
        for(int i=n;i>0;i--)
        {
            fac=fac*i;
        }
        for(int i=m;i>0;i--)
        {
            fac1=fac1*i;
        }
        cout<<fac+fac1<<endl;
    }
    return 0;


}
