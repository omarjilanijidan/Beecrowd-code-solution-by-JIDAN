#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[20],i,j;
    for(i=0;i<20;i++)
        cin>>arr[i];
    for(j=0,i=19;j<20;j++,i--)
        cout<<"N["<<j<<"] = "<<arr[i]<<endl;
    return 0;

}
