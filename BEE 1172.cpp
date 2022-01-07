#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int arr[10];
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]<=0)
        {
            arr[i]=1;

        }

        cout<<"X["<<i<<"] = "<<arr[i]<<endl;
    }
    return 0;


}
