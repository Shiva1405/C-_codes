#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){

   int f=0,j,c;
  ;
   char ch[100];
   printf("enter the arithemetic expression \n");
   scanf("%s",&ch);

   for(int i=0;i<strlen(ch);i++)
{
    if(isalpha(ch[i]))
    {
        j=i;
    }
    if (ch[i] == '+'&&(ch[i-1]!='-'||ch[i-1]!='*'||ch[i-1]!='/')&&(ch[i+1]!='-'||ch[i+1]!='*'||ch[i+1]!='/'))
    {
        if(j<i)
        {
           continue; /* code */
    }
    f=1; 
    }
    if (ch[i] == '*'&&(ch[i-1]!='-'||ch[i-1]!='*'||ch[i-1]!='/'||ch[i-1]!='+')&&(ch[i+1]!='-'||ch[i+1]!='*'||ch[i+1]!='/'||ch[i+1]!='+'))
    {
        if(j<i)
        {
           continue; /* code */
    }
    f=1;
}
if (ch[i] == '-'&&(ch[i-1]!='+'||ch[i-1]!='*'||ch[i-1]!='/')&&(ch[i+1]!='+'||ch[i+1]!='*'||ch[i+1]!='/'))
     {   if(j<i)
        {
           continue; /* code */
    }
    f=1;
}

if (ch[i] == '/'&&(ch[i-1]!='-'||ch[i-1]!='*'||ch[i-1]!='/'||ch[i-1]!='+')&&(ch[i+1]!='-'||ch[i+1]!='*'||ch[i+1]!='/'||ch[i+1]!='+'))
    {
        if(j<i)
        {
           continue; /* code */
    }
    f=1;
}
}
for(int i=j;i>=0;i--)

{
    if(isalpha(ch[i]))
    {
        c=i;
    }
    if (ch[i] == '+'&&(ch[i-1]!='-'||ch[i-1]!='*'||ch[i-1]!='/')&&(ch[i+1]!='-'||ch[i+1]!='*'||ch[i+1]!='/'))
    {
        if(c>i)
        {
           continue; /* code */
    }
    f=1; 
    }
    if (ch[i] == '*'&&(ch[i-1]!='-'||ch[i-1]!='*'||ch[i-1]!='/'||ch[i-1]!='+')&&(ch[i+1]!='-'||ch[i+1]!='*'||ch[i+1]!='/'||ch[i+1]!='+'))
    {
        if(c>i)
        {
           continue; /* code */
    }
    f=1;
}
if (ch[i] == '-'&&(ch[i-1]!='+'||ch[i-1]!='*'||ch[i-1]!='/')&&(ch[i+1]!='+'||ch[i+1]!='*'||ch[i+1]!='/'))
     {   if(c>i)
        {
           continue; /* code */
    }
    f=1;
}

if (ch[i] == '/'&&(ch[i-1]!='-'||ch[i-1]!='*'||ch[i-1]!='/'||ch[i-1]!='+')&&(ch[i+1]!='-'||ch[i+1]!='*'||ch[i+1]!='/'||ch[i+1]!='+'))
    {
        if(c>i)
        {
           continue; /* code */
    }
    f=1;
}
}
if(f==0)
{
    printf("%s is a valid statement",ch);
}
else{
    printf("%s is an invalid stament",ch);
}
}