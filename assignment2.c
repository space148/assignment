#include<stdio.h>
main()
{
	int a[10],i,n,f=0;
	printf("enter 10 elements");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("enter element to know its frequeny");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(a[i]==n)
		f++;
	}
	printf("fequency of %d is %d",n,f);
}
