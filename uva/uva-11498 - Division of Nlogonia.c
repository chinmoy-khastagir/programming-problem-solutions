#include<stdio.h>

int main(){

unsigned int k;
int x1,y1,x2,y2;

while(scanf("%u",&k)&&k!=0)
{
    scanf("%d %d",&x1,&y1);
    while(k--)
    {
        scanf("%d %d",&x2,&y2);
        if((x2==x1&&y2==y1)||(x2!=x1&&y2==y1)||(x2==x1&&y2!=y1))
        {
            printf("divisa\n");
        }
        else if(x2>x1&&y2>y1)
        {
            printf("NE\n");
        }
        else if(x2>x1&&y2<y1)
        {
            printf("SE\n");
        }
        else if(x2<x1&&y2>y1)
        {
            printf("NO\n");
        }
        else
        {
            printf("SO\n");
        }
    }

}


return 0;
}
