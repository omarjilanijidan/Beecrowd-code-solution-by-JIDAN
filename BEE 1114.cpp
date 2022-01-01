#include<iostream>
using namespace std;
int main()
{
    int n,p=2002;


    while(cin>>n) //totokkhon porjnto n input nibe jotokkhon porjnto condition fullfil na kore.
    {

        if(n==p) //password and input equal hole
        {
            cout<<"Acesso Permitido"<<endl;
            break; //loop break hobe
        }
        else if(n!=p)
        {
            cout<<"Senha Invalida"<<endl;
        }

    }
    return 0;


}

