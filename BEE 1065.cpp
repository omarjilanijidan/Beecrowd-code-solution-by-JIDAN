#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5,count=0,x;
    while(n-->0)
    {
        cin>>x;
        if(x%2==0)
        {
            count++;
        }

    }
    cout<<count<<" valores pares"<<endl;
    return 0;



}
