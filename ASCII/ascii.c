/* Creates file with name "ascii.txt" and overWrites the ASCII characters with values
 * $ make[ENTER]		=> a.out
 * $ ./a.out[ENTER]		=> ascii.txt
 * $ vi ascii.txt[ENTER]	=> Opens "ascii.txt"
 * $ make clean[ENTER]		=> removes "a.out", "ascii.txt"
 */
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	fp=fopen("ascii.txt","w+");
	if(fp==NULL){
		printf("Error!\n");
		exit(1);
	}
	for(int i=0; i<256; i++){
//		printf("ASCII[%c]\t%d\t%02X\n",i,i,i);
		fprintf(fp,"ASCII[%c]\t%d\t%02X\n",i,i,i);
	}
	fclose(fp);
	return 0;
}
