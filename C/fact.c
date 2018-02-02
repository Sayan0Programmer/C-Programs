//simply compile it like: $ gcc -Wall -o fact fact.c[ENTER]
//simply run it like: $ ./fact <VALUE>[ENTER]
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int i,f=1,n=atoi(argv[1]);
	if(n>1)
		for(i=1;i<=n;i++)
			f*=i;
	printf("%d\n",f);
	return f;
}
