#include<stdio.h>
#include<math.h>

int main()
{
    long int num,i,r;
    while(scanf("%ld",&num))
    {
        if(num==0)
            break;

        printf("%ld = ",num);

        if(num==1)
        {
            printf("1\n");
            continue;
        }

        if(num<0)
        {
            printf("-1");
            num=-1*num;
            if(num>1)
                printf(" x ");
        }

        while(num%2==0)
        {
            printf("2");
            num=num/2;
            if(num>1)
                printf(" x ");
        }

        i=3;
        r=(long int)sqrt(num);
        while(i<=(r+1))
        {
            if(num%i==0)
            {
                printf("%ld",i);
                num=num/i;
                r=(long int)sqrt(num);
                if(num>1)
                    printf(" x ");

            }
            else
            {
                i=i+2;
            }
        }

        if(num>1)
            printf("%ld",num);

        printf("\n");
    }

    return 0;
}
