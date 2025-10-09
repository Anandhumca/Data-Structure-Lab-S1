#include<stdio.h>
void main()
{
	int a[50],n,i,item,p;
	printf("Enter The Limit:");
	scanf("%d",&n);
	printf("Enter The Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter The Position:");
	scanf("%d",&p);
	printf("Enter The Element To Be Inserted:");
	scanf("%d",&item);
	n=n+1;
	for(i=n;i>=p-1;i--)
	{
		a[i+1]=a[i];
	}
	a[p-1]=item;
	printf("The New Array Is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
