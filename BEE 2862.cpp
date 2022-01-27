#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    while(n-->0)
    {
        cin>>x;
        if(x<=8000)
            cout<<"Inseto!"<<endl;
        else if(x>8000)
            cout<<"Mais de 8000!"<<endl;
    }
    return 0;
}
