#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ,i;
    cin>>t;
    while(t--)
    {
        int count=0;
        string s;
        cin>>s;
        string m=s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='a' && s[i]!='e' &&s[i]!='i' &&s[i]!='o' &&s[i]!='u')
            {
                count++;
                if(count==3)
                    break;
            }
            else
                count=0;

        }
        if(count==3)
            cout<<m<<" nao eh facil"<<endl;
        else
            cout<<m<<" eh facil"<<endl;
    }
    return 0;
}
