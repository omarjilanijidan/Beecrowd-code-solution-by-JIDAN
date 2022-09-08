#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {


        int n;
        cin>>n;
        vector<int>arr1(n);
        for(int i=0; i<n; i++)
            cin>>arr1[i];

        int m;
        cin>>m;
        set<int>arr2;
        for(int j=0; j<m; j++)
        {
            int x;
            cin>>x;
            arr2.insert(x);
        }

        for(int i=0;i<n;i++){
	     if((arr2.find(arr1[i])==arr2.end()))
	        cout<<arr1[i]<<" ";
	    }
	    cout<<endl;



    }
    return 0;

}
