#include<bits/stdc++.h>
using namespace std;
void strip(int n)
{
    vector<int>v(n);
    for(int i=0; i<n; i++)
        cin>>v[i];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum=sum+v[i];
    }
    cout<<sum-(n-1)<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        strip(n);
    }
    return 0;
}
