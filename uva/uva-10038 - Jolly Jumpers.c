#include<stdio.h>

int main()
{
    long int a[3000],t,i,lim,sum,subseq_sum;
    while(scanf("%ld",&t)!=EOF)
    {
       for(i=0;i<t;i++)
       {
            scanf("%ld",&a[i]);
       }

       if(t==1)
       {
           printf("Jolly\n");
           continue;
       }

       subseq_sum=((t-1)*t)/2;
       sum=0;
       lim=i;

        for(i=1;i<lim;i++)
        {
             if((a[i]-a[i-1])<0)
                sum = sum + (-1*(a[i]-a[i-1]));
             else
                sum = sum + (a[i]-a[i-1]);
        }

        if(sum==subseq_sum)
            printf("Jolly\n");
        else
            printf("Not jolly\n");
    }

    return 0;
}
