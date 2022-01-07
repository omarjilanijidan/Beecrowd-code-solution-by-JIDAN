#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i,mn,pos;
    cin>>n;
    int arr[n];
    mn={19999};
    pos=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i ];
        if(arr[i]<mn)
        {
            mn=arr[i];
            pos=i;
        }

    }
    cout<<"Menor valor: "<<mn<<endl;
    cout<<"Posicao: "<<pos<<endl;

    return 0;

}
