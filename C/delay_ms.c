#include<stdio.h>
#include<time.h>
void delay_ms(int);	//Milli seconds
int main(){
	int i;
	printf("Clocks/sec %d\n",CLOCKS_PER_SEC);
	puts("Loop with 250 milliseconds delay:");
	for(i=0;i<30;i++){
		printf("%d\n",i+1);
		delay_ms(250);
	}
	putchar('\n');
	return 0;
}
void delay_ms(int ms){
	long p;		//Pause
	clock_t s,c;	//Start_Time, Current_Time
	p=ms*(CLOCKS_PER_SEC/1000);
	s=c=clock();
	while((c-s)<p)
		c=clock();
}
