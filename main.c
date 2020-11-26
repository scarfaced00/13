#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "keyword.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int is_whitespace(char c)
{
	if(c=='\n' || c==' ' || c=='\r' || c=='\t' || c=='(')
		return 1;
	return 0;
}
int fget_word(FILE* fp, char* word)
{
	char c;
	int cnt;
	while( (c=getc(fp))!=EOF)
	{
		if (is_whitespace(c)==0)
			break;
		}
	if (c=EOF)
		return 0;
	//filling out the word
	cnt=0;
	word[cnt++]=c;
	word[cnt]='\0';
	while((word[cnt]=getc(fp))!=EOF)
	{
		if (is_whitespace(word[cnt])==1)
		{
			word[cnt]='\0';
			break;
		}
		cnt++;
	}
	return cnt;
}

int main(int argc, char *argv[]) {
	FILE *fp;
	char file[100];
	char word[100];
	int cnt;
	printf("input the file name:");
	scanf("%s",file);
	if((fp=fopen(file, "r"))==NULL)
	{
		printf("input file name is invalid (%s)\n",file);
		return -1;	
	} 
	
	while(fget_word(fp,word)!=0)
	{
		count_word(word);
	}
	print_word();

	//bring words from 
	
	fclose(fp);
	return 0;
}
