#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int n,x,sum=0,sum2=0,sum3=0,total=0;
    double m=0,j=0,o=0,A1=0,B1=0,C1=0;
    cin>>n;
    string temp;
    cout<<std::fixed;
    cout<<setprecision(2);
    while(n-->0)
    {
        cin>>x>>temp;
        if(temp=="C")
        {
            sum=sum+x;


        }
        else if(temp=="R")
        {
            sum2=sum2+x;


        }
        else if(temp=="S")
        {
            sum3=sum3+x;


        }
    }
    total=sum+sum2+sum3;



    cout<<"Total: "<<total<<" cobaias"<<endl;

    cout<<"Total de coelhos: "<<sum<<endl;
    cout<<"Total de ratos: "<<sum2<<endl;
    cout<<"Total de sapos: "<<sum3<<endl;
    m=sum;
    j=sum2;
    o=sum3;
    A1=(m/total)*100;
    B1=(j/total)*100;
    C1=(o/total)*100;

    cout<<"Percentual de coelhos: "<<A1<<" %"<<endl;
    cout<<"Percentual de ratos: "<<B1<<" %"<<endl;
    cout<<"Percentual de sapos: "<<C1<<" %"<<endl;
    return 0;
}
