#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int x;
    while(true)
    {
        cin>>x;
        if(x==-1)
            break;
        else if(x==0)
            cout<<"0"<<endl;
        else
            cout<<--x<<endl;
    }
    return 0;
}
