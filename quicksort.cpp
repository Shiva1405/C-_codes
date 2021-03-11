#include<stdio.h>
void swap(int *a,int *b)
{
	
int  c=*a;
	*a=*b;
	*b=c;
}
int partion(int a[],int l,int h)
{
int pi=a[h];
int i= l-1;
for(int j=l;j<h;j++)
{
	if(a[j]<pi)
	{
		i++;
		swap(&a[i],&a[j]);
	}
}
swap(&a[i+1],&a[h]);
return (i+1);
}

void quicksort(int a[],int p,int r)
{
int q;
if(p<r){

	q=partion(a,p,r);
    quicksort(a,p,q-1);
	quicksort(a,q+1,r);
}
}
void printarr(int a[],int n)
{
	printf("array after sorting is\n");
	for(int i=0;i<n;i++)
	{
	printf(" %d\t",a[i]);
	}
 } 

int main()
{
int a[100],n;
printf("enter the size of array ");
scanf("%d",&n);
printf("enter the array elements ");
for(int i=0;i<n;i++)
{
	scanf("%d",&a[i]);
} 	
quicksort(a,0,n-1);
printarr(a,n);
return 0;
}
