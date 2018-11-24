#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/**
	 * 1. .cppファイルは 人間が理解できるファイル（コード）である 
	 * 2. pre processingにて、compileができるコードに変換する 
	 * 3. 変換されたコードをcompileにて、マシーンが理解できるファイル（.o）を生成する 
	 * 4. rink（OS動作用コードリンク）にて、実行ファイル（.exe）を生成する 
	 */
	
	printf("Hello World.\n");
	// Hello World.
	
	printf("age: %d, name: %s\n",30,"jone");
	// age: 30, name: jone
	return 0;
}
