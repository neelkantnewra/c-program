// author: Neelkant Newra
// Date: 24 Nov 2021
// https://github.com/neelkantnewra
// https://www.linkedin.com/in/neelkant-newra-158306173/
#include <stdio.h>

int main(void) {
	// your code goes here
	int T,i;
	scanf("%d",&T);
	for(i=0;i<T;i++){
	    int number=0,four=0;
	    scanf("%d",&number);
	    while (number!=0){
	        if (number%10 == 4){
	            four+=1;
	            number/=10;
	        }else{
	            number/=10;
	        }
	    }
	    printf("%d \n",four);
	}
	return 0;
}
