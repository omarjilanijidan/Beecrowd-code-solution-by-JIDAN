#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    int count1=0,count2=0;
    while(true)
    {
        getline(cin,line);

        if(line=="*")
            break;

        transform(line.begin(),line.end(),line.begin(),::toupper);
        for(int i=0;i<line.size();i++)
        {
            if(line[i]==' ')
                count1++;
            if(line[i]==line[0] && line[i-1]==' ')
                count2++;

        }

        if(count1==count2)
        {
            cout<<"Y"<<endl;
            count1=0;
            count2=0;

        }

        else
        {
            cout<<"N"<<endl;
            count1=0;
            count2=0;

        }
    }
    return 0;
}
