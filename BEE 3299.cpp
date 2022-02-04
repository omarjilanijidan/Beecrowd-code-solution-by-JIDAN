#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m=0;
    cin>>n;
    string s=to_string(n);
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]=='1' && s[i+1]=='3')
        {
            m++;
            break;
        }
    }
    if(m==1)
        cout<<n<<" es de Mala Suerte"<<endl;
    else
        cout<<n<<" NO es de Mala Suerte"<<endl;
    return 0;

}
