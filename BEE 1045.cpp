#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    {

        if(a>=(b+c))
            cout<<"NAO FORMA TRIANGULO"<<endl;
        else if((a*a)==((b*b)+(c*c)))
            cout<<"TRIANGULO RETANGULO"<<endl;

        else if((a*a) > ((b*b)+(c*c)))
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        else if((a*a) < ((b*b)+(c*c)))
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        if(a==b && a!=c || b==c && a!=b ||a==c && a!=b)
            cout<<"TRIANGULO ISOSCELES"<<endl;
        if( a==b && a==c    )
            cout<<"TRIANGULO EQUILATERO"<<endl;


    }
    else if(b>=a && b>=c)
    {

        if(b>=(a+c))
            cout<<"NAO FORMA TRIANGULO"<<endl;
        else if((b*b)==((a*a)+(c*c)))
            cout<<"TRIANGULO RETANGULO"<<endl;

        else if((b*b) > ((a*a)+(c*c)))
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        else if((b*b) < ((a*a)+(c*c)))
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        if(a==b && a!=c || b==c && a!=b ||a==c && a!=b)
            cout<<"TRIANGULO ISOSCELES"<<endl;
        if( a==b && a==c    )
            cout<<"TRIANGULO EQUILATERO"<<endl;


    }
    else if(c>=a && c>=b)
    {

        if(c>=(b+a))
            cout<<"NAO FORMA TRIANGULO"<<endl;
        else if((c*c)==((b*b)+(a*a)))
            cout<<"TRIANGULO RETANGULO"<<endl;

        else if((c*c) > ((b*b)+(a*a)))
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        else if((c*c) < ((b*b)+(a*a)))
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        if(a==b && a!=c || b==c && a!=b ||a==c && a!=b)
            cout<<"TRIANGULO ISOSCELES"<<endl;
        if( a==b && a==c    )
            cout<<"TRIANGULO EQUILATERO"<<endl;


    }






    return 0;
}
