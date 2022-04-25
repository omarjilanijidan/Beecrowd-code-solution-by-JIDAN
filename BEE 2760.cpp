#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    string a,b,c;
    getline(cin,s);
    getline(cin,s1);
    getline(cin,s2);

    cout<<s<<s1<<s2<<endl;
    cout<<s1<<s2<<s<<endl;
    cout<<s2<<s<<s1<<endl;

    for(int i=0;i<s.size() ;i++)
    {
        if(i==10)
            break;
        else
            a+=s[i];
    }
    for(int i=0;i<s1.size() ;i++)
    {
        if(i==10)
            break;
        else
            b+=s1[i];
    }
    for(int i=0;i<s2.size() ;i++)
    {
        if(i==10)
            break;
        else
            c+=s2[i];
    }
    cout<<a<<b<<c<<endl;
    return 0;
}
