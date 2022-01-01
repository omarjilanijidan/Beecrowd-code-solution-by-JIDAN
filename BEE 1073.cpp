#include<iostream>
using namespace std;
int main()
{
    int n,i;


    while(cin>>n)
    {
        for(i=0;i<=n;i++)
        {
            if(i%2==0 &&i!=0)
            {
                cout<<i<<"^"<<2<<" = "<<i*i<<endl;
            }
        }
        break;
    }
    return 0;
}
