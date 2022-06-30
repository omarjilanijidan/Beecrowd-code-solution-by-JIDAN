#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>all,par,impar;
    int count1=0,count2=0;
    for(int i=0;i<15;i++)
    {
        int x;
        cin>>x;
        all.push_back(x);
    }
    for(int i=0;i<all.size();i++)
    {
        if(all[i]%2==0)
        {
            par.push_back(all[i]);
            count1++;
            if(count1==5)
            {
                for(int i=0;i<5;i++)
                {
                    cout<<"par["<<i<<"] = "<<par[i]<<endl;
                }
            }
        }
        else
        {
            impar.push_back(all[i]);
            count2++;
            if(count2==5)
            {
                for(int i=0;i<5;i++)
                {
                    cout<<"impar["<<i<<"] = "<<impar[i]<<endl;
                }
            }
        }
    }

    for(int i=5,j=0;i<impar.size();i++,j++)
    {
        if(j==5)
            j=0;
        cout<<"impar["<<j<<"] = "<<impar[i]<<endl;
    }
    for(int i=5,j=0;i<par.size();i++,j++)
    {
        if(j==5)
            j=0;
        cout<<"par["<<j<<"] = "<<par[i]<<endl;
    }
    return 0;
}
