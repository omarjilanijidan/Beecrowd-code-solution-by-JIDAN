#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string m;
    while(cin>>n>>m)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int x=m[i]-'0';
            sum=sum+x;
        }
        if(sum%3==0)
            cout<<sum<<" sim"<<endl;
        else
            cout<<sum<<" nao"<<endl;
    }
    return 0;
}
