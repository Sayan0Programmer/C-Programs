#include<stdio.h>
#include<stdlib.h>
int main(void){
	int s;		// CLI Status
	FILE *fp;	// File Pointer

	if((fp=fopen("xy.txt","w+"))==NULL){
		perror("File opening ERROR\n");
		exit(1);
	}
	for(int i=0; i<10; i++)
		fprintf(fp,"%d %d\n", i,10*i);
	fclose(fp);

	s=system("javac plot.java");
	s=system("java plot xy.txt");
	s=system("rm *.class xy.txt");

	return 0;
}
