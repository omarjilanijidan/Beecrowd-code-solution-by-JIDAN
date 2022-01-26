#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,count1=0,count2=0,count3=0,count4=0;

    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            count1++;
        if(arr[i]%3==0)
            count2++;
        if(arr[i]%4==0)
            count3++;
        if(arr[i]%5==0)
            count4++;

    }
    cout<<count1<<" Multiplo(s) de 2"<<endl;
    cout<<count2<<" Multiplo(s) de 3"<<endl;
    cout<<count3<<" Multiplo(s) de 4"<<endl;
    cout<<count4<<" Multiplo(s) de 5"<<endl;
    return 0;

}
