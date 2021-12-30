#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float n,Salary,x;
    cin>>n;
    cout<<std::fixed;
    cout<<setprecision(2);
    if(n>=0 && n<=400)
    {
        x=(n/100)*15;
        Salary=x+n;
        cout<<"Novo salario: "<<Salary<<endl;
        cout<<"Reajuste ganho: "<<x<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(n>=400.01 && n<=800)
    {
        x=(n/100)*12;
        Salary=x+n;
        cout<<"Novo salario: "<<Salary<<endl;
        cout<<"Reajuste ganho: "<<x<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(n>=800.01 && n<=1200)
    {
        x=(n/100)*10;
        Salary=x+n;
        cout<<"Novo salario: "<<Salary<<endl;
        cout<<"Reajuste ganho: "<<x<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if(n>=1200.01 && n<=2000)
    {
        x=(n/100)*7;
        Salary=x+n;
        cout<<"Novo salario: "<<Salary<<endl;
        cout<<"Reajuste ganho: "<<x<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if( n>2000)
    {
        x=(n/100)*4;
        Salary=x+n;
        cout<<"Novo salario: "<<Salary<<endl;
        cout<<"Reajuste ganho: "<<x<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }
    return 0;
}
