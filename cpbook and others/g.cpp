#include<stdio.h>
void gcd(int,int);

int main()
{
    int a,b;

    printf("Enter two numbers: \t");
    scanf("%d %d",&a,&b);

    gcd(a,b);


    return 0;
}


//function to calculate g.c.d
void gcd(int a,int b)
{
    int m,n;

    m=a;
    n=b;

    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }

    printf("\nG.C.D of %d  &  %d is %d",a,b,m);
}