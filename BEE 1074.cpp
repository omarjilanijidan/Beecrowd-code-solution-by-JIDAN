#include<iostream>
using namespace std;
int main()
{

    int t,n;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        if(n%2==0 && n<0)
            {
                cout<<"EVEN NEGATIVE"<<endl;
            }
        else if(n%2==0 &&n!=0)
            {
                cout<<"EVEN POSITIVE"<<endl;
            }
        else if(n%2!=0 && n>0)
            {
                cout<<"ODD POSITIVE"<<endl;
            }
        else if(n%2!=0 && n<0)
            {
                cout<<"ODD NEGATIVE"<<endl;
            }

        else if(n==0)
            {
                cout<<"NULL"<<endl;
            }
    }
    return 0;
}
