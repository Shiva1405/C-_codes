#include<stdio.h>
#define true 1
#define false 0
int G[20][20];
int n;
int x[20];
int nextvalue(int k);
int write(int x[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",x[i]);
    }
    printf("\n");
}

int hamiltonian(int k)
{   
    int i,j;
    do{
        nextvalue(k);
        if(x[k]==0)
        return 1;
        if(k==n)
        {
            write(x,n);
        }
        else
        hamiltonian(k+1);
    }while(false);
}

int nextvalue(int k)
{
    int j;
    do{
        x[k]=(x[k]+1)%(n+1);
        if(x[k]==0)
        {
            return 1;
        }
        if(G[x[k-1],x[k]]!=0)
        {
            for(j=1;j<=k-1;j++)
            {
                if(x[j]==x[k])
                break;
            }
        if(j==k)
        {
            if((k<n)||((k==n)  &&G[x[n],x[1]]!=0))
            return 1;
        }
        
            
        }
    }while(false);
}

int main()
{ 
    int i,j;
    int k=0;
    printf("Shivansh Agarwal\n 1808210140\n");
    printf("enter the number of nodes:");
    scanf("%d",&n);
    printf("enter the cost matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&G[i][j]);
        }
    }
    printf("solution vector:\n");
    hamiltonian(k);
    
return 0;

}