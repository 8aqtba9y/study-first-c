#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// 1
	printf("char: %d\n",sizeof(char));
	printf("unsigned char: %d\n",sizeof(unsigned char));
	printf("signed char: %d\n",sizeof(signed char));
	
	// 4
	printf("int: %d\n",sizeof(int));
	printf("unsigned int: %d\n",sizeof(unsigned int));
	printf("signed int: %d\n",sizeof(signed int));
	
	// 2
	printf("short: %d\n",sizeof(short));
	printf("unsigned short: %d\n",sizeof(unsigned short));
	printf("signed short: %d\n",sizeof(signed short));
	
	// 4
	printf("long: %d\n",sizeof(long));
	printf("unsigned long: %d\n",sizeof(unsigned long));
	printf("signed long: %d\n",sizeof(signed long));
	
	// 4
	printf("float: %d\n",sizeof(float));
	
	// 8
	printf("double: %d\n",sizeof(double));
	
	// 16
	printf("long double: %d\n",sizeof(long double));
	
	return 0;
}
