#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    getline(cin,name);

    if(name.size()>140)
        cout<<"MUTE"<<endl;
    else if(name.size()<=140)
        cout<<"TWEET"<<endl;
    return 0;

}
