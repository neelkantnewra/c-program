// author: Neelkant Newra
// Date: 21 Nov 2021
// https://github.com/neelkantnewra
// https://www.linkedin.com/in/neelkant-newra-158306173/
#include <stdio.h>

int main(void) {
	// your code goes here
	// Read test case and iterator
	int T,i;
	scanf("%d",&T);
	for(i=0;i<T;i++){
	    int first_digit=0,last_digit=0,number=0,length=0,temp,power=1,i,final_ans=0;
	    scanf("%d",&number);
	    last_digit = number%10; //Last digit
	    // length of digit
	    temp = number;
	    while(temp!=0){
	        length+=1;
	        temp/=10;
	    }
	    // Evaluate 10^(length-1)
	    for(i=1;i<length;i++){
	        power*=10;
	    }
	    first_digit = number/power; //First digit
	    final_ans = first_digit+last_digit; //Final answer
	    printf("%d \n",final_ans);
	}
	return 0;
}
