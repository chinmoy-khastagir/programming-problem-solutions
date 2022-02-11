#include<stdio.h>
int main ()
{
float n1,n2,n3,tc;
int c=0;

scanf ("%f",&tc);

if(tc<=50)
{
while (tc--)
{
scanf ("%f %f %f", &n1, &n2, &n3);
c++;

if(n1>=0&&n1<=1000&&n2>=0&&n2<=1000&&n3>=0&&n3<=1000)
{
    if (((n3-n2)==(n2-n1)) && ((n2/n1)==(n3/n2)))
{
printf ("Case %d: Both\n",c);
}

else if ((n3-n2)==(n2-n1))
{
printf ("Case %d: Arithmetic Progression\n",c);
}

else if ((n2/n1)==(n3/n2))
{
printf ("Case %d: Geometric Progression\n",c);
}
else
printf ("Case %d: None\n",c);

}

}



}

return 0;
}
