#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    while(getline(cin,name))
    {

        for(int i=0 ; i<name.size();i++)
        {
            if(name[i]==',' && name[i-1]==' '|| name[i]=='.' && name[i-1]==' ')
            {
                name.erase(i-1,1);
                continue;

            }
        }
        cout<<name<<endl;
        }

    return 0;
}

