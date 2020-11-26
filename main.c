#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp=NULL;
	char file[100];
	scanf("%s",file);
	if((fp=fopen(file, "r"))==NULL)
	{
		printf("input file name is invalid (%s)\n",file);
		return -1;	
	}
	fclose(file);
	return 0;
}
