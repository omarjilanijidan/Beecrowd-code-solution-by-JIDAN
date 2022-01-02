#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    double avg=0,count;
    cout<<std::fixed;
    cout<<setprecision(2);
    while(true)
    {
        cin>>x;
        if(x<0)
        {
            break;
        }
        count++;
        avg+=x;



    }
    avg=avg/count;
    cout<<avg<<endl;

    return 0;
}
