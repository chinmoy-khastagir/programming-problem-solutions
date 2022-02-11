/*This program will calculate Least Common Multiple(LCM)*/
/* Name : Chinmoy Khastagir, Id: 1302410200517, Course: Cse 103(Discreet Mathematics)*/

#include<stdio.h>
#include<conio.h>

int lcmfunc(int,int);

int main()
{
	int x,y,lcm;
	clrscr();
	while(1){
	printf("\nEnter two numbers separated by a space(Enter 0 0 to stop calculating LCM):\n");
	scanf("%d %d",&x,&y);
		  if(x==0&&y==0)
			  break;
		  lcm=lcmfunc(x,y);
	printf("\nLCM(%d,%d):%d\n",x,y,lcm);
		  }
	printf("\n Press any key to exit. ");
	getch();
	return 0;

}

int lcmfunc(int x,int y)
{
  int i,lim,val=1;
  if(x==1&&y==1)
	 return 1;
  if(x==1||y==1)
	 return x*y;
  if(x<y)
	 lim=x;
  else
	 lim=y;

 for(i=2;i<=lim;)
  {
	 if((x%i)==0&&(y%i)==0)
	  {
		 val*=i;
		 x=x/i;
		 y=y/i;
		 lim=lim/i;
	  }

	 if((x%i)!=0||(y%i)!=0)
		i++;
  }

 val=val*x*y;
 return val;
}
