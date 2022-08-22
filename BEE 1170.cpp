#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float x ;
        cin>>x;
        int count=0;
        while(true)
        {
            if(x<=1)
                break;
            x=x/2;
            count++;
        }
        cout<<count<<" dias"<<endl;
    }
    return 0;
}
