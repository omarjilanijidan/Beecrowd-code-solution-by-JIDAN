#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]=m[arr[i]]+1;
    }
    for(auto &it:m)
    {
        cout<<it.first<<" aparece "<<it.second<<" vez(es)"<<endl;
    }
    return 0;
}
