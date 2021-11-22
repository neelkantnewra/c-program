// author: Neelkant Newra
// Date: 22 Nov 2021
// https://github.com/neelkantnewra
// https://www.linkedin.com/in/neelkant-newra-158306173/
#include <stdio.h>

int main(void) {
	// your code goes here
	// Read t for testcase 
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    int num,sum=0;
	    scanf("%d",&num);
    	    while (num !=0){
	            sum += num%10;
	            num/=10;
	                }
	        printf("%d \n",sum);
	        }
	return 0;
}
