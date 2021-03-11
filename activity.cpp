#include<stdio.h>
void greed(int a[],int s[],int f[],int n);
int main()
{
	int i,j,n,s[50],f[50],t,a[50];
	printf("Enter the number of activities\n");
	scanf("%d",&n);
	printf("Enter the start time and finish time\n");
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
		scanf("%d%d",&s[i],&f[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			if(f[i]>f[j])
			{
				t=f[i];
				f[i]=f[j];
				f[j]=t;
				t=s[i];
				s[i]=s[j];
				s[j]=t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	greed(a,s,f,n);
	return 0;
}
void greed(int a[], int s[],int f[],int n)
{
	int i,j=0,A[50],k;
	A[0]=a[0];
	k=0;
	for(i=1;i<n;i++)
	{
		if(s[i]>=f[k])
		{
			j++;
			A[j]=a[i];
			k=i;
		}
	}
	printf("Activities selected are : ");
	for(i=0;i<=j;i++)
	printf("a%d\t",A[i]);
}
