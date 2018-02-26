//$ sudo apt update[ENTER]
//$ sudo apt install mono-complete[ENTER]	...Once
//$ mcs hello.cs[ENTER]
//$ mono hello.exe[ENTER]
//$ rm hello.exe[ENTER]
using System;
namespace HelloWorld{
	class hello{
		static void Main(string[] args){
			Console.WriteLine("Hello, world!");
			//Console.ReadLine();
		}
	}
}
