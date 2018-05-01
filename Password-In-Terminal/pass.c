#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<termios.h>

#define MAX_PASS 1024

ssize_t my_getpass(char*, size_t, FILE*);

int main(void){
	char pass[MAX_PASS];
	ssize_t n;
//	pass=getpass("Enter Password: ");
	printf("Enter Password: ");
	n=my_getpass(pass, sizeof(pass), stdin);
	printf("%s\n", pass);

	return 0;
}


ssize_t my_getpass(char *lineptr, size_t len, FILE *stream){
	struct termios old, new;
	int nread = 0;
	char c;

/* Turn echoing off and fail if we can't. */
	if(tcgetattr(fileno(stream),&old)!=0)
		return -1;
	new = old;
	new.c_lflag &= ~ECHO || ECHOCTL;
	if(tcsetattr(fileno(stream),TCSAFLUSH,&new)!=0)
		return -1;
/* Read the password. */
	while((c=getchar())!='\n' && nread+1<len){
		lineptr[nread++]=c;
		printf("*");
	}
	printf("\n");
	lineptr[nread] = '\0';

/* Restore terminal. */
	(void)tcsetattr(fileno(stream),TCSAFLUSH,&old);	
	return nread;
}
