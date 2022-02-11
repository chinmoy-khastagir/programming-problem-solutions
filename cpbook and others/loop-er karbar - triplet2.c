#include<stdio.h>

int main()
{
    int t,i,j,k,l,a,b,c;

    while(scanf("%d",&t)!=EOF)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d %d %d",&a,&b,&c);
            printf("Case %d:\n",i);
            for(j=0;j<=a;j++)
                for(k=j+1;k<=b;k++)
                for(l=k+1;l<=c;l++)
                printf("%d %d %d\n",j,k,l);



        }
    }

    return 0;
}
