#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int arr[6]={2,5,10,20,50,100};
    while(cin>>a>>b)
    {

        if(a==b)
            break;
        b=b-a;
        int count=0;
        for(int i=5;i>=0;i--)
        {
            if(b>=arr[i])
            {
                b-=arr[i];
                count++;
            }
        }
        if(a==0||b==0 && count==2)
            cout<<"possible"<<endl;
        else
            cout<<"impossible"<<endl;


    }
    return 0;
}


