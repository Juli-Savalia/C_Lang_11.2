// Write a Program to find the reverse of a 1D array using a Pointers.

#include<stdio.h>

void main()
{
	int n,i;
	
	printf("Enter the size of an array :-");
	scanf("%d",&n);
	
	int a[n];
	
	printf("Enter the elements of an array:-\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}	
	
	int *p[n];
	
	for(i=n;i>=0;i--)
	{
		p[i]=&a[i];
	}
	printf("Reversed array is = ");
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*p[i]);
	}
}
