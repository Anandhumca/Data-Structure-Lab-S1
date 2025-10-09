#include<stdio.h>
void main()
{
	int a[40],i,n,p,item;
	printf("Enter The Limit:");
	scanf("%d",&n);
	printf("Enter The Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter The Position:");
	scanf("%d",&p);
	printf("Enter The Element To Be Deleted:");
	scanf("%d",&item);
	n=n-1;
	item=a[p-1];
	printf("The Deleted Element is %d\n",item);
	for(i=p-1;i<=n;i++)
	{
		a[i]=a[i+1];
	}
	printf("New Array Is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
