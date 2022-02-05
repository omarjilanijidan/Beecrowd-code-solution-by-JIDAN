#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin>>name;
    int count=0;
    transform(name.begin(),name.end(),name.begin(),::tolower);
    for(int i=0 ; i<name.size() ; i++)
    {
        if(name[i]=='z' && name[i+1]=='e' && name[i+2]=='l' && name[i+3]=='d' && name[i+4]=='a')
            count++;

    }
    if(count>0)

        cout<<"Link Bolado"<<endl;

    else
        cout<<"Link Tranquilo"<<endl;
    return 0;


}
