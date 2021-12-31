#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float positive=0,arr[6],avg,sum;

    for(int i=0;i<6;i++)
        cin>>arr[i];
    for(int i=0;i<6;i++)
        if(arr[i]>0)
        {
            positive++;
            sum+=arr[i];



        }


        avg=sum/positive;

        cout<<positive<<" valores positivos"<<endl;
        cout<<std::fixed;
        cout<<setprecision(1);
        avg=sum/positive;
        cout<<avg<<endl;

        return 0;
}

