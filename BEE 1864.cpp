#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string name="Life is not a problem to be solved";
    transform(name.begin(),name.end(),name.begin(),::toupper);
    for(int i=0;i<n;i++)
    {
        if(i==(n-1))
        {
            cout<<name[i]<<endl;
            break;
        }
        else
            cout<<name[i];

    }
    return 0;
}
