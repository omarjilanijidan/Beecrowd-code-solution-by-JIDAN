#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    while(getline(cin,name))
    {
        for( int i=0 ; i<name.size() ; i++)
        {
            if(name[i]=='@')
                name[i]='a';
            if(name[i]=='&')
                name[i]='e';
            if(name[i]=='!')
                name[i]='i';
            if(name[i]=='*')
                name[i]='o';
            if(name[i]=='#')
                name[i]='u';
        }
        cout<<name<<endl;
    }

    return 0;
}
