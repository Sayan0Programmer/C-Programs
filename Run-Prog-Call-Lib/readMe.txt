These files contains how to run a fact program in another way:
Do the following:

$ rm *.o a.out[ENTER]                       => Remove Object & Binary files
$ gcc -Wall -c fact.c[ENTER]                => >fact.o< make object of library creator file(not having main fun())
$ ar -rcs libfact.a fact.o[ENTER]           => >libfact.a< archiving and making library
$ gcc -Wall -c mainFact.c[ENTER]            => >mainFact.o< caller main fun()
$ gcc mainFact.o -L. -lfact[ENTER]          => >a.out< linking and making final binary file
$ ./a.out[ENTER]                            => running bin file
$ rm a.out *.o *.a[ENTER]                   => remove all created files
