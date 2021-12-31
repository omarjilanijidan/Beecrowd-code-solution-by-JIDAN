#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float A,B,C,D,avg,extra;
    cin>>A>>B>>C>>D;
    cout<<std::fixed;
    cout<<setprecision(1);
    avg = ((2*A)+(3*B)+(4*C)+D)/10;
    cout<<"Media: "<<avg<<endl;
    if(avg>=7)
        cout<<"Aluno aprovado."<<endl;
    else if(avg<5)
        cout<<"Aluno reprovado."<<endl;
    else if(avg>=5 && avg<=6.9)
        cout<<"Aluno em exame."<<endl;
    if(cin>>extra)
    {
        cout<<"Nota do exame: "<<extra<<endl;
        avg=(extra+avg)/2;
        cout<<"Aluno aprovado."<<endl;
        if(avg>=5 || avg<=4.9)
        {
            cout<<"Media final: "<<avg<<endl;
        }

    }
    return 0;
}
