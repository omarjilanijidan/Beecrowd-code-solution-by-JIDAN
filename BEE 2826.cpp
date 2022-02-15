#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line1,line2;
    cin>>line1>>line2;
    if(line1>line2)
    {
        cout<<line2<<endl;
        cout<<line1<<endl;
    }
    else if(line1<line2)
    {
        cout<<line1<<endl;
        cout<<line2<<endl;
    }
    return 0;
}
