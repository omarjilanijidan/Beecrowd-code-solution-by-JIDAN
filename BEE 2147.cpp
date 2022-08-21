#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        float x=str.size()/100.0;
        printf("%.2f\n",x);
    }
    return 0;
}
