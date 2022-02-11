#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    long long int a[3000],b[3000],t,i,lim,s,jolly;
    while(scanf("%lld",&t)==1)
    {
       for(i=0;i<t;i++)
       {
            scanf("%lld",&a[i]);
       }

       if(t==1)
       {
           printf("Jolly\n");
           continue;
       }

       memset(b,0,sizeof(b));

       lim=i;

        for(i=1;i<lim;i++)
        {
             if((a[i]-a[i-1])<0)
             {
                s=(-1*(a[i]-a[i-1]));
                b[s-1]=s;
             }
             else
             {
                 s=(a[i]-a[i-1]);
                 b[s-1]=s;
             }
        }

        jolly=0;

        for(i=1;i<t-1;i++)
        {
            if((b[i]-b[i-1])==1)
                jolly=1;
            else
            {
                jolly=0;
                break;
            }

        }

        if(jolly==1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }

    return 0;
}
