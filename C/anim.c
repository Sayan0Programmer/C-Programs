#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/*
void p(const char *str){
        write(1,str,strlen(str));
        sleep(1);
}
*/
int main(){
//        p("you "); p("can't "); p("see "); p("me");
//        write(1,"\33[2K\r",5); //erase line and carriage return
//        write(1,"\33[1A",4); // move 1 line up
//        write(1,"\33[2K\r",5); //erase line and carriage return
//        p("Ohh .. yeah!!\n");
//const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
//write(STDOUT_FILENO, "\e[1;1H\e[2J", 12);
	for(int c=0; c<2; c++) {
		for(int i=0; i<30; i++) {
			for(int j=0; j<30; j++)
				printf("%c", 'a'+c);
			printf("\n");
		}
		sleep(1);
		system("clear");
	}
        return 0;
}
