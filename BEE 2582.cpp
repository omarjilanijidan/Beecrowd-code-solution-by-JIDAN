#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n;
    cin>>n;
    string name[11]={"PROXYCITY","P.Y.N.G.","DNSUEY!","SERVERS","HOST!","CRIPTONIZE","OFFLINE DAY","SALT","ANSWER!","RAR?","WIFI ANTENNAS"};
    while(n-->0)
    {
        cin>>x>>y;
        cout<<name[x+y]<<endl;
    }

    return 0;
}
