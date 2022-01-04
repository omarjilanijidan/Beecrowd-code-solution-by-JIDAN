#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,grenais=0,Inter=0,Gremio=0,Empates=0;
    string line="Novo grenal (1-sim 2-nao)";
    while(true)
    {
        cin>>x>>y;
        grenais=grenais+1;
        cin>>i;

        if(x>y && i==1)
        {
            cout<<line<<endl;

            Inter=Inter+1;

        }
        if(y>x && i==1)
        {
            cout<<line<<endl;
            Gremio=Gremio+1;

        }
        if(x==y && i==1)
        {
            cout<<line<<endl;
            Empates=Empates+1;

        }
        else if(i==2)
        {
            if(x<y)
            {
                cout<<line<<endl;
                Gremio=Gremio+1;
                break;
            }
            else if(x>y)
            {
                cout<<line<<endl;
                Inter=Inter+1;
                break;
            }
            else if(x==y)
            {
                cout<<line<<endl;
                Empates=Empates+1;
                break;
            }



        }

    }

    cout<<grenais<<" grenais"<<endl;
    cout<<"Inter:"<<Inter<<endl;
    cout<<"Gremio:"<<Gremio<<endl;
    cout<<"Empates:"<<Empates<<endl;
    if(Inter > Gremio)
        cout<<"Inter venceu mais"<<endl;
    else if(Inter < Gremio)
        cout<<"Gremio venceu mais"<<endl;

    else if(Inter == Gremio)
        cout<<"Nao houve vencedor"<<endl;

    return 0;
}
