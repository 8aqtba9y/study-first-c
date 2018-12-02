#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void basic_pointer();

int main(int argc, char** argv) {
	
	basic_pointer();
	
	return 0;
}

void basic_pointer() {
	
	int primitive_a = 100;
	int *pointer_a = &primitive_a;
	int primitive_b = primitive_a;
	
	printf("primitive_a: %d\n",primitive_a); // 100
	printf("pointer_a: %d\n",pointer_a); // address value
	printf("*pointer_a: %d\n",*pointer_a); // 100
	
	primitive_b = 1000;
	printf(" >>> primitive_b = 1000;\n");
	printf("primitive_a: %d\n",primitive_a); // 100
	printf("primitive_b: %d\n",primitive_b); // 1000
	
	*pointer_a = 2000;
	printf(" >>> *pointer_a = 2000;\n");
	printf("primitive_a: %d\n",primitive_a); // 2000
	printf("*pointer_a: %d\n",*pointer_a); // 2000
	
	
	int *pt; // address value
	//pt = NULL;
	printf("pt: %d\n", pt);
	if (pt) { // 0 == false, not 0 == true 
		printf("ポイント変数ptにはaddressの値が入っています\n",*pointer_a);
	} else {
		printf("ポイント変数ptにはaddressの値が入っていません\n",*pointer_a);
	}
	
	int primitive_c = 100;
	int *pointer_c = &primitive_c;
	int **pointer_pointer_c = &pointer_c;
	printf("primitive_c: %d\n",primitive_c); // 100
	printf("*pointer_c: %d\n",*pointer_c); // 100
	printf("**pointer_pointer_c: %d\n",**pointer_pointer_c); // 100
	
}
