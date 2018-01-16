#include<stdio.h>
#define N 100
int main(){
	int i,j,n,A[N][N],s=0;
	printf("Enter the order n*n n= ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;scanf("%d",&A[i][j++]));
	for(i=0;i<n;i++)
		s+=A[i][i]-A[i][n-i-1];
	if(s<0)
		s*=(-1);
	printf("The difference between two diagonal's addition=%d\n",s);
	return 0;
}
