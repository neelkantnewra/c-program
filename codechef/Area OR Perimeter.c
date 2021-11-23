// author: Neelkant Newra
// Date: 23 Nov 2021
// https://github.com/neelkantnewra
// https://www.linkedin.com/in/neelkant-newra-158306173/

#include <stdio.h>

int main(void) {
	// your code goes here
	int L,B,area,peri;
	scanf("%d",&L);
	scanf("%d",&B);
	area = L*B;
	peri = 2*L + 2*B;
	if(area>peri){
	    printf("Area \n%d",area);
	}else if (peri>area){
	    printf("Peri \n%d",peri);
	}else{
	    printf("Eq \n%d",area);
	}
	return 0;
}
