#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    float x,y,z,avg;
    cin>>n;
    cout<<std::fixed;
    cout<<setprecision(1);
    while(n-->0)
    {
        if(cin>>x>>y>>z)
        {
            avg=((x*2)+(y*3)+(z*5))/10;
            cout<<avg<<endl;
        }

    }
    return 0;
}

