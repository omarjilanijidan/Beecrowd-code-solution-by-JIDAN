#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,percentage=0;
    cin>>x>>y;
    percentage=((y/x)*100)-100;
    cout<<std::fixed;
    cout<<setprecision(2);
    cout<<percentage<<"%"<<endl;
    return 0;

}
