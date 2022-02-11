# include<stdio.h>
# include<math.h>

long long int reverse(long long int num)
{
    long long int x,rem,sum=0,p,y;
    if(num>=0&&num<10)
        return num;
    x=(long long int)(log10(num)+1) - 1;
    while(num!=0)
    {
        rem=num%10;
        num=num/10;
        y=1;
        for(p=x;p>0;p--)
            y=y*10;
        x--;
        sum+=(rem*y);
    }

    return sum;
}

int main()
{
    long long int count,number,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&number);
        count=0;
        while(1)
        {
            number+=reverse(number);
            count++;
            if(number==reverse(number))
            {
                printf("%lld %lld\n",count,number);
                break;
            }

        }
    }

    return 0;

}
