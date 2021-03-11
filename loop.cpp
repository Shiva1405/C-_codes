#include<stdio.h>
int main()
{ int a[10],n;
    printf("enter the size of array" );  // op
    scanf("%d",&n);
    if (n>=8&&(n%2==0)){
        printf("loop unrollring is required\nEnter the input :\n= 3 - a\n+ a b t1\n+ a c t2\n+ t1 t2 t3\nOUTPUT:\n\nOptimized code is :\n+ 3 b t1\n+ 3 c t2\n+ t1 t2 t3");
        for (int  i = 0; i < n; i=i+2)
        {
            scanf("%d",&a[i]);
            scanf("%d",&a[i+1]);
            /* code */
        }
        

    }
   else{ for (int  i = 0; i < n; i++)
    {
      scanf("%d",&a[i]);  /* code */
    }
   }
   return 0;
}
