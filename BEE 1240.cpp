#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    while(x-->0)
    {
        int a , b , i;
        cin>>a>>b;
        string x=to_string(a);
        string y=to_string(b);
        i= x.size()-y.size();
        x.erase(0,i);

        if(x==y)
            cout<<"encaixa"<<endl;
        else
            cout<<"nao encaixa"<<endl;
    }
    return 0;

}


