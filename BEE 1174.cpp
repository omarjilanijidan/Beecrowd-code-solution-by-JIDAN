#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    float arr[100];
    cout<<std::fixed;
    cout<<setprecision(1);
    for(i=0;i<100;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<100;i++)
    {
        if(arr[i]<=10)
            cout<<"A["<<i<<"] = "<<arr[i]<<endl;
    }
    return 0;
}
