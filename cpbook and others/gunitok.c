#include<stdio.h>

int main()
{
    int t;
    long unsigned int x,n,i,j,k=0;
    scanf("%d",&t);
    if(t<=100)
        while(t--)
        {
            scanf("%lu %lu",&x,&n);
            if(x>=1&&x<=n&&n>=x&&n<=1000000)
            {
                j=n/x;
                printf("Case %d: ",++k);
                for(i=1;i<=j;i++)
                    printf("%lu ",x*i);


                printf("\n");

            }
        }

return 0;
}
