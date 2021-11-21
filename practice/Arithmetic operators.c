// author: Neelkant Newra
// Date: 21 Nov 2021
// https://github.com/neelkantnewra
// https://www.linkedin.com/in/neelkant-newra-158306173/

#include <stdio.h>

int main() //return type

{
    // write your code here
    int first_number = 9, second_number=3,answer;
    
    // addition
    answer = first_number + second_number;
    printf("The Addition of %d and %d is %d \n",first_number,second_number,answer);
    
    // Subtraction
    answer = first_number - second_number;
    printf("The Subtraction of %d and %d is %d \n",first_number,second_number,answer);
    
    // Multiplication
    answer = first_number*second_number;
    printf("The Multiplication of %d and %d is %d \n",first_number,second_number,answer);
    
    // Division
    answer = first_number / second_number;
    printf("The Division of %d and %d is %d \n",first_number,second_number,answer);
    
    return 0;
}
