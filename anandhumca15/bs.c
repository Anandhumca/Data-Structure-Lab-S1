#include<stdio.h>
void main()
{
	int a[50],i,j,n,temp;
	printf("Enter THe Limit:");
	scanf("%d",&n);
	printf("Enter The Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted Array Is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
