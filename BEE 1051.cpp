#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n,tax;
    cin>>n;
    cout<<std::fixed;
    cout<<setprecision(2);

    if(n>=3000.01 && n<=4500)
    {
        n=(n-2000);
        if(n>=1000.01)
        {
            n=((n-999.99)/100)*18;

            n=((999.99/100)*8)+n;
            cout<<"R$ "<<n<<endl;
        }
    }


    else if(n>4500)
    {
        n=(n-2000);
        if(n>2500)
        {
            n=((n-2499.99)/100)*28;
            n=((999.99/100)*8)+n;
            n=n=((1499.99/100)*18)+n;
            cout<<"R$ "<<n<<endl;

        }
    }
    else if(n>=2000.01 && n<=3000)
    {
        n=(n-2000);
        {

            n=((n/100)*8);

            cout<<"R$ "<<n<<endl;

        }
    }
    else if(n>=0 && n<=2000)
        cout<<"Isento"<<endl;
    return 0;
}
























