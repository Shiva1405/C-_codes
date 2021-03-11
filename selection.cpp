#include<stdio.h>
void selectionsort(int a[],int n)
{
int min,k,t;
for (int i = 0; i < n-1; i++)
{
    min=a[i];
    k=i;
    for (int  j = i+1; j < n; j++)
    {
      if(a[j]<min)
      {
           min=a[j];
           k=j;
      } } /* code */
    t=a[i];
    a[i]=a[k];
    a[k]=t;

    }
    
    /* code */
}


int main()
{
    int a[50],n;
    printf("enter the no of array elements{max 50} \n");
    scanf("%d",&n);
    printf("enter the element of array ");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
        /* code */
    }
    selectionsort(a,n);
    for(int i = 0; i < n; i++)
    {
       printf("%d  ",a[i]); /* code */
    }
    return 0;
    }