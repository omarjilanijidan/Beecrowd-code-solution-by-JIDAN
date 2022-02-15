#include<bits/stdc++.h>
using namespace std;
int main()
{

    string line;
    while(cin>>line)
    {
        int n, count=0, x;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            count++;
            if(count==n)
            {
                cout<<line[x-1]<<endl;
            }
            else
                cout<<line[x-1];
        }
    }
    return 0;
}
