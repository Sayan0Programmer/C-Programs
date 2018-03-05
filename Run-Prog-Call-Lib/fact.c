#include<stdio.h>
#include"fact.h"
int fact(int n){
	int f=1;
	for(int i=1;i<=n;f*=i++);
	return f;
}
