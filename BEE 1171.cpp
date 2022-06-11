#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,count=0;
    cin>>n;
    int x[n];
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    for(int i=0;i<n;i++)
    {
        int m=x[i];
        for(int j=0;j<n;j++)
        {
            if(m==x[j])
                count++;
        }
        int c=count;
        v.push_back({m,c});

        count=0;
    }
    v.erase( unique( v.begin(), v.end() ), v.end() );
    for(auto it:v)
    {
        cout<<it.first<<" aparece "<<it.second<<" vez(es)"<<endl;
    }

    return 0;
}
