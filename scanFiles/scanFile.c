//gcc readFile.c[ENTER]
//./a.out <full_file_name_with_location>[ENTER]
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
#define N 1000
void delay_ms(int);
int main(int argc,char *argv[]){
	FILE *fp;
	char c=0;
	fp=fopen(argv[1],"r");
	if(fp==NULL){
		printf("Error!\n");
		exit(1);
	}
	while((c=fgetc(fp))!=EOF){
		printf("%c\n",c);
		delay_ms(250);
	}
	fclose(fp);
	return 0;
}
void delay_ms(int ms){
	long p;		//Pause
	clock_t s,c;	//Start_Time, Current_Time
	p=ms*(CLOCKS_PER_SEC/1000);
	s=c=clock();
	while((c-s)<p)
		c=clock();
}
