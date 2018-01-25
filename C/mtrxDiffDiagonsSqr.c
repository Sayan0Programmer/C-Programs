//***Difference between summation of diagonals of an Square matrix
//gcc mtrxDiffDiagonsSqr.c[ENTER]
//./a.out _n[ENTER]		WHERE Integer 0<=n<=100
#include<stdio.h>
#define N 100
int main(){
	int i,j,n,A[N][N],s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;scanf("%d",&A[i][j++]));
	for(i=0;i<n;i++)
		s+=A[i][i]-A[i][n-i-1];
	if(s<0)
		s*=(-1);
	printf("%d\n",s);
	return 0;
}
