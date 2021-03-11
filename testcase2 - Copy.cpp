#include<stdio.h>  //test input 2 (i) ++a-b-- (ii)++a+b- (iii)-+a+b  //
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
        if(a[i]=='+'){
            if(a[i+1]=='-'||a[i-1]=='-'){
                f=1;
                break;
            }
        }
        if(a[i]=='-')
        {
            if(a[i-1]=='+'||a[i+1]=='+'){
                f=1;
                break;
            }
        }
        if (i==strlen(a)-1)
        {
            if(isalpha(a[i])||isdigit(a[i]))
            {
                f=0;/* code */
        }
        else if(a[i]=='+')
        {
            if(a[i-1]!='+')
            {
                f=1;
                break;
            }
        }
        else if(a[i]=='-')
        {
            if (a[i-1]!='-')
            {
               f=1;
               break; /* code */
            }
            
        }
        /* code */
    }
    }
if(f==0){
    printf("valid expression");
}    
else{
    printf("invalid expression");
}
    return 0;
}

