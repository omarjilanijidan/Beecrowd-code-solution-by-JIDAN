#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int x = b.size();
        int y= a.size()-x;
        string test;
        for(int i=a.size()-1; i>=y; i--)
            test+=a[i];
        reverse(test.begin(),test.end());
        if(test==b)
            cout<<"encaixa"<<endl;
        else
            cout<<"nao encaixa"<<endl;
    }
    return 0;
}
