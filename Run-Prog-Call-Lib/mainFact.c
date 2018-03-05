#include<stdio.h>
#include"fact.h"
int main(){
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("n!= %d\n",fact(n));
	return 0;
}
