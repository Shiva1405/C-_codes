#include<stdio.h>
void heapify(int a[],int n,int i)
{
    int k, max=i,left,right;
    left=2*i+1;
    right=2*i+2;
if(left < n && a[left] > a[max] )  
{
max=left;
}  
if (right<n && a[right]>a[max])
{
max=right;
   }
if(max!=i){
    k=a[max];
    a[max]=a[i];
    a[i]=k;
    heapify(a,n,max);
}

}
void heapsort(int a[],int n)
{
    int k;
    for (int i = n/2-1; i >=0; i--)
    {
      heapify(a,n,i);  /* code */
    }
    for (int  i = n-1; i >0; i--)
    {
        k=a[0];
        a[0]=a[i];
        a[i]=k;
       heapify(a,i,0); /* code */
    }
    
    
}
int  main()
{
    int a[100],n;
    printf("enter the no. of element in array\n ");
    scanf("%d",&n);
    printf("enter the array elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);/* code */
    }
  heapsort(a,n);  
  printf("sorted array-\n");
  for (int i = 0; i < n; i++)
  {
     printf("%d\t",a[i]); /* code */
  }
  


return 0;
}