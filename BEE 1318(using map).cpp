#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>m>>n)
    {
        if(n==0 && m==0)
            break;
        int arr[n],count=0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]=m[arr[i]]+1;
        }
        for(auto &it:m)
        {
            if(it.second>1)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
