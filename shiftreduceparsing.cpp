#include<stdio.h>
int graph[100][100],x[100],n,m;
void mcoloring(int k);
void NextValue(int k);
void write(int arr[100]);
int main()
{
	int i,j;
	printf("Name:Shubh Bhatnagar \n");
	printf("Roll no.:1808210144\n");
	printf("Section:C\n");
	printf("Enter the number of vertices\n");
	scanf("%d",&n);
	printf("Enter the graph\n");
	for(i=1;i<=n;i++)
	{
		x[i]=0;
		for(j=1;j<=n;j++)
		scanf("%d",&graph[i][j]);
	}
	printf("Enter the number of colors\n");
	scanf("%d",&m);
	mcoloring(1);
	return 0;
}
void mcoloring(int k)
{
	while(1)
	{
		NextValue(k);
		if(x[k]==0)
		return;
		if(k==n)
		write(x);
		else
		mcoloring(k+1);
	}
}
void NextValue(int k)
{
	int j;
	while(1)
	{
		x[k]=(x[k]+1)%(m+1);
		if(x[k]==0)
		return;
		for(j=1;j<=n;j++)
		{
			if(graph[k][j]==1 && x[k]==x[j])
			break;
		}
		if(j==n+1)
		return;
	}
}
void write(int arr[100])
{
	int i;
	
	printf("Solution Vector: ");
	for(i=1;i<=n;i++)
	printf("%d\t",x[i]);
	printf("\n");
}