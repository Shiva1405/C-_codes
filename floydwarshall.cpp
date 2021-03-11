#include<stdio.h>
int min(int a,int b)
{
    if(a<b)
    {
        return a;
       
    }
    else
    {
    return b;
    \
    }
}



int floyd(int D[][4],int n)
{
    int i,j,k;
    int d[20][20];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            d[i][j]=D[i][j];
            
        }
    }

    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
                
                
            }
           
        }
        
    }
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        printf("%d\t",d[i][j]);
    }
    printf("\n");
}
    
    
}
int main()
{
    int i,j;
   
    int n;
    printf("enter the number of vertices:");
    scanf("%d",&n);
    int D[n][n];
    printf("enter the cost matrix\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&D[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",D[i][j]);
            
        }
        printf("\n");
    }
    
    floyd(D,n);
    
}