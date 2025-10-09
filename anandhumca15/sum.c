#include<stdio.h>
void main()
{
	int a[50],i,n,sum=0;
	printf("Enter The Limit:");
	scanf("%d",&n);
	printf("Enter The Array Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("The Sum Is %d\n",sum);
}
