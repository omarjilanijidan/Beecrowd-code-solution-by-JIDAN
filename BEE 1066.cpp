#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5,count=0,x,odd=0,pos=0,neg=0;
    while(n-->0)
    {
        cin>>x;
        if(x%2==0)
        {
            count++;
        }
        if(x%2!=0)
        {
            odd++;
        }
        if(x>0)
        {
            pos++;
        }
        if(x<0)
        {
            neg++;
        }


    }
    cout<<count<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<pos<<" valor(es) positivo(s)"<<endl;
    cout<<neg<<" valor(es) negativo(s)"<<endl;

    return 0;



}
