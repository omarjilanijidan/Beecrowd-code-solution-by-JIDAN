#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    getline(cin,line);
    for(int i=0; i<line.size();i++)
    {
        if(line[i]=='.' || line[i]=='-')
        {
            line.erase(i,1);
            cout<<endl;
        }

        cout<<line[i];
    }
    cout<<endl;
    return 0;


}
