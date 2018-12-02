#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void func1() {
	printf("func1 called.\n");
}

void func2();

int main(int argc, char** argv) {
	
	func1(); // func1 called.
	func2(); // func2 called.
	
	return 0;
}

void func2() {
	printf("func2 called.\n");
}
