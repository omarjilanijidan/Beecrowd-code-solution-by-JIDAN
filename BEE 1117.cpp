#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int count=0;
    float x,sum=0,div=0;
    cout<<std::fixed;
    cout<<setprecision(2);
    while(true)
    {
        cin>>x;

        if(x<0 || x>10)
        {
            cout<<"nota invalida"<<endl;
        }
        else if(x>0 || x<=10)
        {
            sum=sum+x;
            count++;
        }
        if(count==2)
            break;

    }
    div=sum/count;
    cout<<"media = "<<div<<endl;

    return 0;

}
