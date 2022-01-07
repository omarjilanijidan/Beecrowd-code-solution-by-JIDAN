#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int  i,arr[100];
    double n;
    cout<<std::fixed;
    cout<<setprecision(4);
    cin>>n;

    for(i=0;i<100;i++)
    {

        cout<<"N["<<i<<"] = "<<n<<endl;
        n=n/2;

    }
    return 0;
}
