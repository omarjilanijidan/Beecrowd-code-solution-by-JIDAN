#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    string nam="Thor";
    string name;
    cin>>n;
    while(n-->0)
    {
        cin>>name>>x;
        if(name==nam)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
