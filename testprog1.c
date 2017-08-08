#include "testprog1.h"
#include "testprog2.h"
#include "testprog3.h"
#include "testprog4.h"

void func1()
{
	printf("I am func1 \n");
}

void main()
{
	static myvar = 0;
	func1();
	main2();
	main3();
	main4();
	getch();
}

