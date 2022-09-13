#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {

        int count=2;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        for(int i=0; i<s.size(); i++)
        {

            if(s[i]==' ')
                count-=1;
            if(count==2)
            {
                s[i]=s[i]-32;
                count=0;
            }
            count++;
        }


        cout<<s<<endl;
    }
    return 0;
}
