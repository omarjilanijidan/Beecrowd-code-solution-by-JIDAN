#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=4;
    vector<int>v;
    while(t--)
    {
        int sum=0;
        for(int i=0;i<7;i++)
        {
            int x;
            cin>>x;
            sum+=x;
        }
        v.push_back(sum);
    }
    int max=*max_element(v.begin(),v.end());
    int max2=max;
    int bin;
    string s;
    while(max>0)
    {
        bin=max%2;
        s+= to_string(bin);
        max/=2;
    }
    reverse(s.begin(), s.end());
    if(max2==0)
        cout<<max2<<" = "<<"0"<<endl;
    else
        cout<<max2<<" = "<<s<<endl;
    return 0;
}
