#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    float x,y,div;
    cin>>n;
    cout<<std::fixed;
    cout<<setprecision(1);
    while(n-->0)
    {
        cin>>x>>y;
        if(x!=0 && y!=0)
        {
            div=x/y;
            cout<<div<<endl;
        }
        else if(x==0)
        {
            div=x/y;
            cout<<div<<endl;

        }
        else if(y==0)
        {
            cout<<"divisao impossivel"<<endl;
        }

    }

    return 0;
}

