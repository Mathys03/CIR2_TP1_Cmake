#include <cstdlib>
#include <iostream>

int main(){
	std::cout << "Hello world\n";
	return EXIT_SUCCESS;
}


#define TABSIZE 10
#define TABSIZE1 5

int main(){
	int i, j;
	int MyTab[TABSIZE][TABSIZE1];
	for (i = 0;i<TABSIZE;++i){
		for (j = 0;j<TABSIZE1;++j){
			MyTab[i][j] = i + j * 10;
	}
	for (i=0; i<TABSIZE * TABSIZE1; i++) {
		 printf("%d ",*(MyTab+i));
	}

}
