#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	int s;	//status
	s=system("javac hello.java");
	s=system("java hello");
	sleep(3);	//3 seconds delay
	printf("\n\nPress any key to terminate: ");
	getchar();
	printf("Removing created files");
	s=system("rm hello.class");
	printf("Thank You...\n\n");
	return 0;
}
