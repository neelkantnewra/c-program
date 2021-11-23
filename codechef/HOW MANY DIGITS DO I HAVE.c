// author: Neelkant Newra
// Date: 21 Nov 2021
// https://github.com/neelkantnewra
// https://www.linkedin.com/in/neelkant-newra-158306173/
#include <stdio.h>

int main(void) {
	// your code goes here
	int i,num;
	scanf("%d",&num);
	while(num!=0){
	    i++;
	    num/=10;
	}
	if(i==1){
	    printf("%d",i);
	}else if(i==2){
	    printf("%d",i);
	}else if(i==3){
	    printf("%d",i);
	}else{
	    printf("More than 3 digits");
	}
	return 0;
}
