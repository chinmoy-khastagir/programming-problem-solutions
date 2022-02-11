#include<stdio.h>
#include<string.h>

int main()
{
    char ch[101];
    int i,j,t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%*c");
        scanf("%[0-9]",ch);
        i=ch[(strlen(ch)-1)];
        if(ch[i]!=NULL)
        if(i%2==0)
            printf("even\n");
        else
            printf("odd\n");
        scanf("%*c");

    }

    return 0;
}
