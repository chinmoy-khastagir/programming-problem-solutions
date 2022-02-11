#include<stdio.h>

int main()
{
    unsigned long long int i,j,count,max,temp,temp1,flag;
    while(scanf("%llu %llu",&i,&j)!=EOF)
    {
        max=flag=0;
        if(i>j)
        {
            temp1=i;
            i=j;
            j=temp1;
            temp1=i;
            flag=1;
        }
        else
        {
            temp1=i;
        }
        for(;i<=j;i++)
        {
            if(i==1)
            {
                max=count=1;
                continue;

            }
            temp=i;
            count=0;
            do
            {
                count++;
                if(temp%2==0)
                {
                    temp=temp/2;
                }
                else
                {
                    temp=(3*temp)+1;
                }

            }while(temp!=1);

            count++;
            if(max<count)
                max=count;
        }

        if(flag==1)
            printf("%llu %llu %llu\n",j,temp1,max);
        else
            printf("%llu %llu %llu\n",temp1,j,max);

    }

    return 0;
}
