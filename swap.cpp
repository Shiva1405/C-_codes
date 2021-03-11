#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int keyword(char a[])
{
	char keyword[32][10]={ "auto","double","int","struct","break","else","long","switch","case","enum","register","typedef","char","extern","return","union","const","float","short","unsigned","continue","for","signed","void","default","goto","sizeof","voltile","do","if","static","while"};
	int i,f=0;
	for(i=0;i<32;++i)
	{
		if(strcmp(keyword[i],a)==0)
		{
			f=1;
			break;
		}
	}
return f;
}
int main()
{
	FILE *f1;
    
	int i,j=0,f=0;
	char ch,str[100],op[]="+-*/=";
	f1=fopen("C:\\Users\\DELL\\OneDrive\\Desktop\\add.txt","r");
	if(f1==NULL)
	{   
		printf("Error while opening file \n");
		exit(0);
	}
	
    while ((ch=fgetc(f1))!=EOF)
	{
    for(i=0;i<5;i++)
	{
		if(ch==op[i])
		{
			printf("%c is an operator\n",ch);

		}
	}
	if(isdigit(ch))
	{
		printf("%c is a constant\n",ch);
	}
	if(isalpha(ch)){
		str[j++]=ch;

	}	
	else if((ch==' '||ch=='\n'||ch=='(')&&(j!=0))
	{
		str[j]='\0';
		j=0;
		if(keyword(str)==1)
		{
			printf("%s is a keyword\n",str);
            
		}

       else {
		  printf("%s is an identifier\n",str); 
		   	}
	}	
		
	}
	fclose(f1);
	return 0;
}