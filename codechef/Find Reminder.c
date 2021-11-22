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
	    int num_1,num_2,reminder;
	    scanf("%d %d",&num_1,&num_2);
	    reminder = num_1%num_2;
	    printf("%d \n",reminder);
	        }
	return 0;
}
