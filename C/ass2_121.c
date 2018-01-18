//BigInt like 100!
#include<stdio.h>
#define N 500
int main(){
	int F[N],s,c,i,j,n,nF;
	scanf("%d",&n);
	F[0]=1,nF=1;
	for(i=1;i<=n;i++){
		c=0;
		for(j=0;j<nF;j++)
			s=i*F[j],s+=c,c=s/10,F[j]=s%10;
		while(c)
			F[nF++]=c%10,c/=10;
	}
	for(i=nF;i>0;printf("%d",F[--i]));
	printf("\n");
	return 0;
}
