//$ gcc -o T txt2bin.c[ENTER]
//$ ./T <message string>[ENTER]
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printC2B(char);
int main(int argc, char *argv[]){
	int i, j, n;
	char *A;
	for(i = 1; i < argc; i ++){
		A = argv[i], n = strlen(A);
		for(j = 0; j < n; printC2B(A[j++]));
		printf(" ");
	}
	printf("\n");
	return 0;
}
void printC2B(char c){
	printf("<");
	for(char i = 7; i > -1; i--)
		printf("%d", (c >> i) & 0x01);
	printf(">");
}
