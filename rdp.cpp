#include<stdio.h>
#include<string.h>
char ch[10];
int i=0,f=0;
void E();
void F()
{ 
    
if(ch[i]=='a'){
    i++;
    }
  
  else if(ch[i]=='(')
  { 
      i++;
  E();  
  if(ch[i]==')'){ 
      i++; 
      return; 
      }
      else{
           f=1;
           return;
           }
  }
else
{f=1;
    return;
    }
}
void Tdas(){
	if (ch[i] == '*') {	i++;	F();	Tdas();} 
}

void  T()
{F();  Tdas();}

void Edas()
{ if(ch[i]=='+')
{i++; 
T(); 
Edas();}
}


void E()
{T(); Edas();}

int main()
{
    printf("Enter the input string \n");
    printf("GRAMMAR Format :\n E -> T E'\nE' -> + T E' |   Null\nT -> F T'\nT' -> * F T' |     Null\nF -> ( E ) | a\n");
    gets(ch);
    E();
    if(i==strlen(ch)&&f==0) 
    {
        printf("string is accepted\n");}
    else{printf("string is rejected\n");}
return 0;
}