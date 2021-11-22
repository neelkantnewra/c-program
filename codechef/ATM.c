// author: Neelkant Newra
// Date: 21 Nov 2021
// https://github.com/neelkantnewra
// https://www.linkedin.com/in/neelkant-newra-158306173/

#include <stdio.h>

int main(void) {
	// your code goes here
	int x;
	float y;
	
	scanf("%d %f",&x,&y);
	if (x%5 == 0){
	    if (y >= x+0.50){
	        printf("%.2f",y-x-0.50);
	    }
	    else{
	        printf("%.2f",y);
	    }
	}else{
	        printf("%.2f",y);
	    }
	
	return 0;
}
