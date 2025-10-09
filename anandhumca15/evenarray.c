#include<stdio.h>
void main()
{
	int a[50],i,n;
	printf("Enter The Limit:");
	scanf("%d",&n);
	printf("Enter The Array Elements:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Even numbers are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
			printf("%d\n",a[i]);
	
	}
}
