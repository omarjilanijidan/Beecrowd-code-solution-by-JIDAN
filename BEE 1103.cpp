#include<bits/stdc++.h>
using namespace std;
int main()
{
    int H1,M1,H2,M2;
    while(true)
    {
        cin>>H1>>M1>>H2>>M2;
        if(H1==0 && M1==0 && H2==0 &&  M2==0  )
            break;
        else if(H1<H2 &&M1<=M2 )
            cout<<((H2-H1)*60)+M2-M1<<endl;
        else if(H1<H2 && M1>=M2 )
            cout<<((H2-H1)*60)-(M1-M2)<<endl;
        else if(H1>H2 &&M1<=M2 )
            cout<<(((24-H1)+H2)*60)+M2-M1<<endl;
        else if(H1>H2 &&M1<=M2 )
            cout<<(((24-H1)+H2)*60)+M2-M1<<endl;
        else if(H1>H2 &&M1>=M2 )
            cout<<(((24-H1)+H2)*60)-(M1-M2)<<endl;
        else if(H1==H2 &&M1>M2 )
            cout<<(24*60)-(M1-M2)<<endl;
        else if(H1==H2 &&M1<M2 )
            cout<<(M2-M1)<<endl;
        else if(H1==H2 &&M1==M2 )
            cout<<24*60<<endl;
    }
    return 0;
}
