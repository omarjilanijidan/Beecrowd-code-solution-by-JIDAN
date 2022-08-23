#include<bits/stdc++.h>
using namespace std;
int main()
{
    float s=0;
    for(int i=1;i<=100;++i)
    {
        s+=1/float(i);

    }

    printf("%.2f\n",s);
    return 0;
}
