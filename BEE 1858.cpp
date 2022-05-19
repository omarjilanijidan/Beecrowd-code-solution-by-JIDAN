#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=1;i<=n;i++)
   {
       cin>>arr[i];
   }
   int k=1;
   int less=arr[1];
   for(int i=1;i<=n;i++)
   {


       if(arr[i]<less)
       {
           k=i;
           less=arr[i];

       }
   }
   cout<<k<<endl;
   return 0;
}
