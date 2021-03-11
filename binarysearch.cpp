#include<stdio.h>
int binary(int a[],int j,int m,int item)
{
	if(j<=m)
	{
	int mid=j+(m-1)/2;
	if(a[mid]==item)
	{
		return mid;
	}
	if(a[mid]>item)
	{
		return binary(a,j,mid-1,item);
	}
    return binary(a,mid+1,m,item);
   }
   return -1;
}
int main()
{
int a[100],n,i,item,loc=0;
printf("enter the no. of elements");
scanf("%d",&n);
printf("enter the array elements in sorted order");
for(i=0;i<=n-1;i++)
{
	scanf("%d",&a[i]);
}
printf("Enter the element to be searched for");
scanf("%d",&item);
loc=binary(a,0,n-1,item);
if(loc!=-1)
{
	printf("The element %d is found at index %d and  position %d",item,loc,loc+1);
}
else{
	printf("The element %d is not found",item);
}
return 0;
}
