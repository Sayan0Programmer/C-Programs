#include <stdio.h>
#include <unistd.h>   
int main(){
	char *password; // password string pointer
	password = getpass("Enter Password: "); // get a password & echo nothing
	printf("%s\n",password); // this is just for conformation that password stored successfully
	return 1;
}
