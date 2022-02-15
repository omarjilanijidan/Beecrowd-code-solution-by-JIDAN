#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;

    while(getline(cin,line))
    {
        int i,count=0,count1=0;
        for(i=0;i<line.size();i++)
        {
            if(line[i]=='_')
            {
                count++;
                if(count==2)
                {
                    line.replace(i,1,"</i>");
                    count=0;
                }
                else
                    line.replace(i,1,"<i>");

            }
            else if(line[i]=='*')
            {
                count1++;
                if(count1==2)
                {
                    line.replace(i,1,"</b>");
                    count1=0;
                }
                else
                    line.replace(i,1,"<b>");

            }
        }

        cout<<line<<endl;
    }
    return 0;
}



