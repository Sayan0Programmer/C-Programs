//gcc mxSubSequence
//./a.out
#include<stdio.h>
#include<string.h>
#define N 100
int max(int,int);
void findLCS(char *,char *,int,int);
int main(){
	char s1[N],s2[N];
	int n1,n2,A[N][N];
	printf("Enter two strings in two lines\n");
	scanf("%s",s1);
	scanf("%s",s2);
	n1=strlen(s1),n2=strlen(s2);
	findLCS(s1,s2,n1,n2);
	return 0;
}
int max(int a,int b){
	return(a>b)?a:b;
}
void findLCS(char *s1,char *s2,int n1,int n2){
	int L[n1+1][n2+1];
	int r,c,i;
	for(r=0;r<=n1;r++){
		for(c=0;c<=n2;c++){
			if(r==0||c==0)
				L[r][c]=0;
			else if(s1[r-1]==s2[c-1])
				L[r][c]=L[r-1][c-1]+1;
			else
				L[r][c]=max(L[r-1][c],L[r][c-1]);
		}
	}
	r=n1,c=n2,i=L[r][c];
	char LCS[i+1];
	LCS[i]='\0';
	while(r>0 && c>0) {
		if(s1[r-1]==s2[c-1])
			LCS[i-1]=s1[r-1],i--,r--,c--;
		else if(L[r-1][c] > L[r][c-1])
			r--;
		else
			c--;
	}
	printf("The status Table is\n");
	for(r=0;r<=n1;r++){
		for(c=0;c<=n2;printf("%d\t",L[r][c++]));
		printf("\n");
	}
	printf("Length of the LCS: %d\n", L[n1][n2]);
	printf("LCS: %s\n", LCS);
}
