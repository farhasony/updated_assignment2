#include<stdio.h>
int main()
{
	int min,max,i;
	printf("enter min and max value\n");
	scanf("%d%d",&min,&max);
	
	for(i=min;i<=max;i++)
	{
		if(i%2==0)
		printf("even number %d\n",i);
		if(i%2!=0)
		printf("odd number %d\n",i);

	}
}
