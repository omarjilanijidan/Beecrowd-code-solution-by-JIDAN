#include<iostream>

using namespace std;
int main()
{

    string one;
    string two;
    string three;
    getline(cin,one);
    getline(cin,two);
    getline(cin,three);
    if(!one.compare("vertebrado"))
    {
        if(!two.compare("ave"))
           {
               if(!three.compare("carnivoro"))
               {
                   cout<<"aguia"<<endl;
               }
               else if(!three.compare("onivoro"))
               {
                   cout<<"pomba"<<endl;
               }


           }
           else if(!two.compare("mamifero"))
           {
               if(!three.compare("herbivoro"))
               {
                   cout<<"vaca"<<endl;
               }
               else if(!three.compare("onivoro"))
               {
                   cout<<"homem"<<endl;
               }


           }

    }
    if(!one.compare("invertebrado"))
    {
        if(!two.compare("inseto"))
           {
               if(!three.compare("hematofago"))
               {
                   cout<<"pulga"<<endl;
               }
               else if(!three.compare("herbivoro"))
               {
                   cout<<"lagarta"<<endl;
               }


           }
           else if(!two.compare("anelideo"))
           {
               if(!three.compare("hematofago"))
               {
                   cout<<"sanguessuga"<<endl;
               }
               else if(!three.compare("onivoro"))
               {
                   cout<<"minhoca"<<endl;
               }


           }

    }





    return 0;
}
