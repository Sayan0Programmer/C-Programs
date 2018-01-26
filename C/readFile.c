//gcc readFile.c[ENTER]
//./a.out <full_file_name_with_location>[ENTER]
#include<stdio.h>
#include<stdlib.h>
#define N 100
int main(int argc,char *argv[]){
	FILE *fp;
	char c;
	fp=fopen(argv[1],"r");
	if(fp==NULL){
		printf("Error!\n");
		exit(1);
	}
	while(c!=EOF){
		c=fgetc(fp);
		printf("%c",c);
	}
	fclose(fp);
	return 0;
}
