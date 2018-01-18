#include<stdio.h>
#include<math.h>
#define N 25
#define R 2*N+1
#define C 4*N+1
#define PI 3.1415926
char G[R][C];
void dsplG(),clrG(),grph(),putPoint(int,int,char),fill(int,int,char);
double mod(double),gx2x(int,double);
double rectSin(double,double),sinc(double);
int x2gx(double,double),y2gy(double,double);
double f(double x){
	return rectSin(x,1);
}
int main(){
	clrG();
	grph();
	dsplG();
	return 0;
}
void grph(){
	double lr,ur,mxx,mxy,fx;
	int a,b,x,y,i;
	printf("Lower Range= ");
	scanf("%lf",&lr);
	printf("Upper Range= ");
	scanf("%lf",&ur);
	//if(lr>ur)
	//	lr=lr+ur-(ur=lr);
	mxx=mod((mod(ur)>mod(lr))?ur:lr);
	printf("%lf %lf %lf\n",lr,ur,mxx);
	a=x2gx(lr,mxx),b=x2gx(ur,mxx);
	mxy=f(gx2x(a,mxx));
	for(x=a;x<=b;x++){
		fx=f(gx2x(x,mxx));
		//printf("x=%lf\tgx=%d\tf(x)=%lf\n",gx2x(x,mxx),x,fx);
		if(fx>mxy)
			mxy=fx;
	}
	printf("mxy=%lf\n",mxy);
	for(x=a;x<=b;x++){
		y=y2gy(f(gx2x(x,mxx)),mxy);
		//printf("f(%d) = %d\n",x,y);
		putPoint(x,y,'*');
		fill(x,y,':');
	}
}
void dsplG(){
	int i,j;
	for(i=0;i<R;i++){
		for(j=0;j<C;j++)
			printf("%c",G[i][j]);
		printf("\n");
	}
	printf("\n");
}
void clrG(){
	int i,j;
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			if(i==N && j==2*N)
				G[i][j]='o';
			else if(j==2*N)
				G[i][j]='|';
			else if(i==N)
				G[i][j]='-';
			else
				G[i][j]=' ';
		}
	}
}
double mod(double x){
	return (x<0)?-x:x;
}
int x2gx(double x,double mxx){
	int gx=(2*N)*x/mxx;
	return gx;
}
double gx2x(int x,double mxx){
	return mxx*x/(2*N);
}
int y2gy(double y,double mxy){
	int gy=N*y/mxy;
	return gy;
}
void putPoint(int x,int y,char c){
	G[N-y][2*N+x]=c;
}
void fill(int x,int y,char c){
	int i;
	if(y>0)
		for(i=1;i<y;i++)
			putPoint(x,i,c);
	else
		for(i=-1;i>y;i--)
			putPoint(x,i,c);
		
}
double rectSin(double x,double f){
	int i;
	double s=0;
	for(i=1;i<=5;i++)
		s+=sin(2*PI*f*x*(2*i-1))/(2*i-1);
	return s*4/PI;
}
double sinc(double x){
	return (x==0)?1:sin(x)/x;
}
