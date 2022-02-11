#include<stdio.h>

void lcm(int,int);

int main()
{
    int a,b;

    printf("Enter two numbers: \t");
    scanf("%d %d",&a,&b);

    lcm(a,b);
    


    return 0;
}

//function to calculate l.c.m
void lcm(int a,int b)
{
    int m,n;

    m=a;
    n=b;

    while(m!=n)
    {
        if(m<n)
            m=m+a;
        else
            n=n+b;
    }

    printf("\nL.C.M of %d  &  %d is %d",a,b,m);
}

