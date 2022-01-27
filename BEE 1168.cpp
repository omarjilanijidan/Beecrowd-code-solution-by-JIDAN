#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    int x,n,sum=0;
    cin>>x;

    while(x-->0)
    {
        cin>>name;
        n=name.size();

        for(int i=0;i<n;i++)
        {
            if(name[i]=='1')
                sum=sum+2;
            if(name[i]=='2')
                sum=sum+5;
            if(name[i]=='3')
                sum=sum+5;
            if(name[i]=='4')
                sum=sum+4;
            if(name[i]=='5')
                sum=sum+5;
            if(name[i]=='6')
                sum=sum+6;
            if(name[i]=='7')
                sum=sum+3;
            if(name[i]=='8')
                sum=sum+7;
            if(name[i]=='9')
                sum=sum+6;
            if(name[i]=='0')
                sum=sum+6;

        }
        cout<<sum<<" leds"<<endl;
        sum=0;

    }
    return 0;
}

