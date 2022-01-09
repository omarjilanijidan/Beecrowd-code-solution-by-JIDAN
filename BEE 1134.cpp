#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,Alcool=0,Gasolina=0,Diesel=0;
    while(cin>>x && x>0)
    {
        if(x==4)
            break;
        else if(x==1)
        {
            Alcool++;
        }
        else if(x==2)
        {
            Gasolina++;
        }
        else if(x==3)
        {
            Diesel++;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<Alcool<<endl;
    cout<<"Gasolina: "<<Gasolina<<endl;
    cout<<"Diesel: "<<Diesel<<endl;
    return 0;
}
