#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n , c1=0,c2=0,c3=0,c4=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            c1++;
        if(arr[i]%3==0)
            c2++;
        if(arr[i]%4==0)
            c3++;
        if(arr[i]%5==0)
            c4++;
    }
    cout<<c1<<" Multiplo(s) de 2"<<endl;
    cout<<c2<<" Multiplo(s) de 3"<<endl;
    cout<<c3<<" Multiplo(s) de 4"<<endl;
    cout<<c4<<" Multiplo(s) de 5"<<endl;

    return 0;

}
