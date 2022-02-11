#include<stdio.h>

int main()
{
    int t,flag;
    long long int g,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&g,&l);
        flag=0;

        if(l%g==0)
        {
            printf("%lld %lld\n",g,l);
        }
        else
        {
            printf("-1\n");

        }


    }

    return 0;
}
