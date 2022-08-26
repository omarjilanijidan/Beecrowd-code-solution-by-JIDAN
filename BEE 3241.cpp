#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        string m=n;
        if(n=="P=NP")
            cout<<"skipped"<<endl;
        else
        {
            int x=stoi(n.erase(n.find("+"),n.size()));
            int y=stoi(m.erase(0,m.find("+")));
            cout<<x+y<<endl;
        }
    }
    return 0;
}

