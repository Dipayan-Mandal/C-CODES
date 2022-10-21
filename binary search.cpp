#include<stdio.h>
int binary(int array[],int x,int low,int high)
{
	while(low<=high)
	{
	int mid=(low+high)/2;
	if(array[mid]==x)
	return mid;
	if(array[mid]<x)
	low=mid+1;
	else
	high=mid-1;
	}
	return -1;
}
int main()
{
	int array[100],i,n,x,k;
	printf("Enter the size of arry");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements of array");
		scanf("%d",&array[i]);
	}
	k=sizeof(array)/sizeof(array[0]);
	printf("enter the element");
	scanf("%d",&x);
	int result=binary(array,x,0,k-1);
	if(result==-1)
	printf("not found");
	else
	printf("element found at index %d",result);
}
