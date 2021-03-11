#include<stdio.h>
int issubsetsum(int s[],int t,int sum)
{
if (sum==0)
{
    return 1;
}
if (t==0 && sum !=0)
{
    return 0;
}
if (s[t-1]>sum)
{
return issubsetsum(s,t-1,sum);
}
return issubsetsum(s,t-1,sum)||issubsetsum(s,t-1,sum-s[t-1]);

}
int main()
{
    int n,s[10],t,sum;
    printf("enter the size of set");
    scanf("%d",&n);
    printf("\n enter the elements of set \n");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&s[i]);
    }
    printf("\nenter the sum\n");
    scanf("%d",&sum);
    t=sizeof(s)/sizeof(s[0]);
    if (issubsetsum(s,t,sum)==1)
    {
        printf("found a subset with given sum");
    }
    else
    {
        printf("no subset with the given sum");
    }
    return 0;
}