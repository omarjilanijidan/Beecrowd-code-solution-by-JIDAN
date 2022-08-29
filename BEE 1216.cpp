#include<bits/stdc++.h>
using namespace std;
int main()
{
    double count=0;
    double x,sum=0;
    char name[50];
    while(scanf(" %[^\n] %lf", name,&x)!=EOF)
    {
        sum=sum+x;
        count++;
    }
    printf("%.1lf\n",sum/count);
    return 0;
}
