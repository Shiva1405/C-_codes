#include<stdio.h>/*test input 1 (i) a+b (ii)a+b-  */
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
    int f=0;
    char a[10];
    printf("enter the arithemetic expression");
    scanf("%s",&a);
    for (int i = 0; i < strlen(a); i++)
    {
        if (i==strlen(a)-1)
        {
            if(isalpha(a[i])||isdigit(a[i]))
            {
                f=1;/* code */
        }
        /* code */
    }
    }
if(f==1){
    printf("valid expression");
}    
else{
    printf("invalid expression");
}
    return 0;
}

