#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,x;
    float a ,sum=0;

    while(true)
    {
        if(x==2)
            break;
        cin>>a;


        if(a>0.0 && a<11.0)
        {
            sum=sum+a;
            count++;
            if(count==2)
            {

                printf("media = %.2f\n",sum/count);
                sum=0;
                count=0;
                cin>>x;
                cout<<"novo calculo (1-sim 2-nao)"<<endl;

                if(x<1 || x>2)
                {
                    while(cin>>x)
                    {
                        if(x>=1 && x<=2)
                        {
                            cout<<"novo calculo (1-sim 2-nao)"<<endl;
                            break;
                        }
                        cout<<"novo calculo (1-sim 2-nao)"<<endl;
                    }
                }

            }
        }


        else
            cout<<"nota invalida"<<endl;

    }
    return 0;
}
