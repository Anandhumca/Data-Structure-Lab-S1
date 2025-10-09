#include<stdio.h>
void main()
{
	int a[50],b[50],c[100],m,n,i,j,k;
	printf("\nEnter The Size Of The First Array:");
	scanf("%d",&m);
	printf("\nEnter The Elements Of First Array(sorted order):");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter The Size Of The Second Array:");
	scanf("%d",&n);
	printf("\nEnter The Elements Of Second Array(sorted order):");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	i=0;
	j=0;
	k=0;
	while(i<m&&j<n)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=b[j];
			k++;
			j++;
		}
	}
	while(i<m)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<n)
	{
		c[k]=b[j];
		k++;
		j++;
	}
	printf("\nMerged Array=\n");
	for(i=0;i<m+n;i++)
	{
		printf("%d\n",c[i]);
	}
}
		
