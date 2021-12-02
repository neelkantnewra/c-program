#include <stdio.h>

// author: Neelkant Newra
// GitHub: https://github.com/neelkantnewra

// Ternary Operator      condition?exp1:exp2
int main(void) {
	// your code goes here
	
	int i=2;
	int j=0;
// 	if (i==1)
// 	    j=5;
// 	else
// 	    j=10;

    j = i==1?5:10; 
	    
	printf("%d\n",j);
	
	return 0;
}
