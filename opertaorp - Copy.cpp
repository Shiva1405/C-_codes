#include<stdio.h>
#include<string.h>
int find(char a){
switch(a){
case 'a':
return 0;
case '+':
return 1;
case '*':
return 2;
case '$':
return 3;
}}
void display(char a[],int top1,char b[],int top2){
int i;
for(i=0;i<=top1;i++)
 printf("%c",a[i]);
 printf("\t");
for(i=top2;i<strlen(b);i++)
 printf("%c",b[i]);
 printf("\n");
}
int main(){
char table[][4]= {' ','>','>','>','<','<','<','>','<','>','<','>','<','<','<',' '}, input[10],stack[10]={'$'};
int top_stack=0,top_input=0,i,j;
printf("operator precedence parsing for E->E+E/E*E/a\n");
printf("enter the string\n");
scanf("%s",input);
strcat(input,"$");
printf("stack\tinput\n");
display(stack,top_stack,input,top_input);
while(1){
if((stack[top_stack]=='$')&&(input[top_input]=='$')){
 printf("string accepted");  break;
}
if(table[find(stack[top_stack])][find(input[top_input])]==' '){
 printf("parse error");
}
if(table[find(stack[top_stack])][find(input[top_input])]=='<'){
stack[++top_stack]='<';
stack[++top_stack]=input[top_input];
top_input++;
display(stack,top_stack,input,top_input);
continue;
}
if(table[find(stack[top_stack])][find(input[top_input])]=='>'){
stack[++top_stack]='>';
display(stack,top_stack,input,top_input);
top_stack-=3;
display(stack,top_stack,input,top_input);
}}}