#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    int x;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        if(x == n )
            count++;

    }
    cout<<count<<endl;
    return 0;
}
