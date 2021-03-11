#include<stdio.h>//intialised the pre procedure directive 
void parscingtable(char []);//defination of the function parscing 
 int main()
 {
     char str[10]; //intialised array to string to take input string
     printf("enter the input string"); //taking an string from the user
     scanf("%s",str);  //taken input in the array of string 
     parscingtable(str);  //called a funtiion to print the parscing table
return 0;

}
void parscingtable(char str[10])
{int i, top=0;
    char stack[10];// initialised a stack 
printf("Stack Relation Input Comment\n");// heading elements of the parsing table 
for (i = 0,stack[0]='$'; i < 10; i++)//initialise the stack with $ and used the loop to read the elements in stack 
{
 if (str[i]>stack[top]) //comparing the precedence of the stack and input
 {
 	stack[++top]=str[i];//Assigned the value of the input to stack and increamented the top value
   printf("%s \t\t<\t\t%s\t\t shift by %c \n",stack,str,str[i]); //shift operation 
    }
if (str[i]<stack[top])//comparing the precedence of the stack and input
{
    /* code */
 if (stack[top]='$'&&str[i]=='\0')//checks whether the input string is reached at its end and the stack contains $$
 {  
   printf("%s \t\t>\t\t%s\t\t  String accepted\n",stack,str);//string accepts 
	break;//ends the loop
     /* code */
 }
 else
 {
    printf("%s \t\t>\t\t%s\t\t  Reduce by %c \n",stack,str,str[i]);//reduce operation 
	stack[top--]='\0';i--;//deletes the element in stack and iteration moves one step backward 
} /* code */
} 
 }
 }