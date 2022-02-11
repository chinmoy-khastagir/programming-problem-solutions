#include<stdio.h>

int main()
{
    long long unsigned int num1,num2,rem1,rem2,count,carry;
    while(scanf("%llu %llu",&num1,&num2))
    {
        if(num1==0&&num2==0)
            break;

        count=carry=0;
        while(num1!=0||num2!=0)
        {
            rem1=num1%10;
            num1=num1/10;
            rem2=carry+(num2%10);
            num2=num2/10;
            if((rem1+rem2)>9)
            {
                carry=1;
                count++;
            }
            else
                carry=0;

        }

        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("1 carry operation.\n");
        else
            printf("%llu carry operations.\n",count);
    }

    return 0;
}
