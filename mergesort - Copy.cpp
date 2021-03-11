#include<stdio.h>
#include<stdlib.h>

void mergesort(int *a,int l,int m,int r)
{
int i,j,p,k,b[50];

i=l;
j=l;
k=m+1;
while(i<=m && j<=r)
{
	if(a[i]<a[j])
	{
		b[k]=a[i];
		k++;
		i++;
}
    else{
	b[k]=a[j];
	k++;
	j++;
}
}
while(i<=m){
	b[k]=a[i];
	k++;
	i++;
	
}
while(j<=r)
{
	b[k]=a[j];
	k++;
	j++;
	
}

for(p=l;p<k;p++)
{
	a[p]=b[p];
}
}
	
void merge(int *a,int l,int r)
{
	if(l<r){
		int m=(l+r)/2;
		merge(a,l,m);
		merge(a,m+1,r);
		mergesort(a,l,m,r);
		
	}
}
int main()
{
	int i,a[60],n;
	printf("enter the size of array ");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	merge(a,0,n-1);
	printf("sorted array is \n");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
return 0;
}
