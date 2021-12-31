#include<iostream>
using namespace std;
int main()
{
    float positive=0,arr[6];
    for(int i=0;i<6;i++)
        cin>>arr[i];
    for(int i=0;i<6;i++)
        if(arr[i]>0)
        {
            positive++;

        }
        cout<<positive<<" valores positivos"<<endl;
        return 0;
}

