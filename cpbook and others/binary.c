#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,b,rem,vag,i,x,y;
    char ch[10];

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        if(n>0&&n<=10)
        {
            if(n==1)
                printf("0\n1\n");
            else
            {
                x=(int)pow(2,n);
                y=(int)pow(2,n-1);

                for(b=y;b<x;b++)
                {
                   vag=b/2;
                   rem=b%2;
                   i=n-1;
                   ch[i]=rem;

                   while(vag!=0)
                   {
                       rem=vag%2;
                       vag=vag/2;
                       i=i-1;
                       ch[i]=rem;

                   }

                           for(i=0;i<n;i++)
                               printf("%d",ch[i]);
                           printf("\n");

                }
            }
        }
    }

    return 0;
}
