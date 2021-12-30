#include<iostream>
using namespace std;
int main()
{
    int x,y,w,z,hour,minute;
    cin>>x>>w>>y>>z;
    if(x<y && w<z)
    {
        hour=(y-x);
        minute=(z-w);
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }
    else if(x<y && w>z)
    {
        minute=((y*60)+z)-((x*60)+w);


        if(minute<60)
        {
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
        }
        else if(minute>60)
        {
            hour=(minute/60);
            minute=(minute%60);
            cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
        }


    }
    else if(x<y && w==z)
    {
        hour=y-x;
        minute=w-z;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }
    else if(x>y && w==z)
    {
        hour=x-y;
        hour=(24-hour);
        minute=w-z;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }
    else if(x==y && w<z)
    {
        hour=x-y;
        minute=z-w;
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }
    else if(x==y && w>z)
    {
        minute=(1440-((60*x)+w));
        minute=(minute+((60*y)+z));
        hour=(minute/60);
        minute=(minute%60);

        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }
    else if(x==y && w==z)
    {
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }
    else if(x>y && w<z)
    {
        hour=(x-y);
        hour=(24-hour);
        minute=(z-w);
        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }
    else if(x>y && w>z)
    {
        minute=(1440-((60*x)+w));
        minute=(minute+((60*y)+z));
        hour=(minute/60);
        minute=(minute%60);

        cout<<"O JOGO DUROU "<<hour<<" HORA(S) E "<<minute<<" MINUTO(S)"<<endl;
    }





    return 0;
}
