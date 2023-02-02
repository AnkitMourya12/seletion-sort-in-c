#include<stdio.h>
int main()
{
	int arr[20],i,j,n,temp;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the elment:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//logic of selection sort
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}
	printf("Now sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
		printf("%d\n",arr[i]);
		
	}
	return 0;
}
