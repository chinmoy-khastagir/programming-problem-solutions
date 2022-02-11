#include <stdio.h>

int main()
{
	 int i,j,n,a;
	 float sum,avr;

	 scanf("%d",&n);

	 while(n--){
		  scanf("%d",&i);
		  sum=0;
		  for(j=0;j<i;j++){
				scanf("%d",&a);
				sum=sum+a;

		  }
		  avr=sum/i;
		  printf("%.2lf\n",avr);
	 }
	 return 0;
}
