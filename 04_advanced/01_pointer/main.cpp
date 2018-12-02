#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void basic_pointer();

void var_basic_pointer();

void func_basic_pointer();

// var_basic_pointer
int basic_func(){
	return 100;
}

// var_basic_pointer
void pointer_func(int *pv1, int *pv2, int *pv3){
	*pv1 = 100;
	*pv2 = 200;
	*pv3 = 300;
}

// func_basic_pointer
void basic_pointer_func(int var1, int var2){
	printf("var1: %d\n",var1);
	printf("var2: %d\n",var2);
}

// func_basic_pointer
void plus(int var1, int var2) {
	printf("add: %d + %d = %d\n",var1, var2, (var1+var2));
}

// func_basic_pointer
void minus(int var1, int var2) {
	printf("minus: %d - %d = %d\n",var1, var2, (var1-var2));
}

// func_basic_pointer
void process(void (*pt_func)(int, int), int var1, int var2) {
	pt_func(var1, var2);
}

int main(int argc, char** argv) {
	
	// basic_pointer();
	
	// var_basic_pointer();
	
	func_basic_pointer();
	
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

void var_basic_pointer() {
	
	int var_basic_func;
	var_basic_func = basic_func();
	printf("var_basic_func: %d\n",var_basic_func);
	
	int var1_pointer_func;
	int var2_pointer_func;
	int var3_pointer_func;
	pointer_func(&var1_pointer_func, &var2_pointer_func, &var3_pointer_func);
	printf("var1_pointer_func: %d\n",var1_pointer_func);
	printf("var2_pointer_func: %d\n",var2_pointer_func);
	printf("var3_pointer_func: %d\n",var3_pointer_func);	
}

void func_basic_pointer() {
	// ポイント関数の変数pt_funcを定義
	void (*pt_func)(int, int);
	pt_func = basic_pointer_func;
	pt_func(100, 200); // 100, 200
	
	process(plus, 100, 200); // 300
	process(minus, 100, 200); // -100
}
