#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0;
    int arr[1000];
    cin>>n;

    for(i=0;i<1000;i++)
    {
        cout<<"N["<<i<<"] = "<<j<<endl;
        j++;
        if(j==n)
            j=0;

    }
    return 0;

}
