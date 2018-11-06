#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BYTE unsigned char

int min(int *A, int n, int x, int k, int *v){
	int i, m=0;
	while(A[m] < k) { ++m; }
	for(i=m; i<n; i++) {
		if(A[i]<=A[m] && A[i]>1 && A[i]>k && i != x)
			m = i;
	}
	if(i==n-1)
		return m;
	else
		return *v;
}

int main() {
	int A[50], t, n, k, i;
	int m1, m2;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &k);
		for(i=0; i<n; scanf("%d", &A[i++]));
		m1=-1, m2=-1;
		m1 = min(A, n, -1, k, &m1);
		m2 = min(A, n, m1, k, &m2);
		printf("%d %d\n", m1, m2);
	}	
	return 0;
}
