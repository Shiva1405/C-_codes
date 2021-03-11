#include<stdio.h>

int main()
{
char str[10],stack[10],top=0;
printf("Enter your input String ");
scanf("%s",str);	
int i;
printf("Stack    \tRelation  \tInput   \tComment\n");
for(i=0,stack[0]='$';i<10;i++){
if(str[i]>stack[top])
{
	stack[++top]=str[i];
	printf("%s \t\t<\t\t%s\t\t shift by %c \n",stack,str,str[i]);
}
if(str[i]<stack[top])
{
	if(stack[top]=='$'&&str[i]=='\0')
	{
	printf("%s \t\t>\t\t%s\t\t  String accepted\n",stack,str);
	break;	
	}
	else
	printf("%s \t\t>\t\t%s\t\t  Reduce by %c \n",stack,str,str[i]);
	stack[top--]='\0';i--;
}
}
return 0;
}