#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc,char *argv[],char *envp[]){
	int status=system("gcc -o F fact.c");
	char **agv=argv+1;
	execve(agv[0],agv,envp) ;
	execvp(agv[0],agv) ;
	return 0;
}
