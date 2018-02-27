//$ sudo apt-get install gobjc[ENTER]...Once
//$ gcc -o hello hello.m[ENTER]
//$ ./hello[ENTER]
#import <Foundation/Foundation.h>
int main (int argc, const char * argv[]){
	NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
	NSLog (@"hello world");
	[pool drain];
	return 0;
}
