#include<stdio.h>
void main()
{
	int a[40],i,n,key,flag=0;
	printf("Enter The Array Limit:");
	scanf("%d",&n);
	printf("Enter The Array Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter The Element To Search:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("%d Element found at position %d\n",key,i+1);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("Element not found");
	}
}
