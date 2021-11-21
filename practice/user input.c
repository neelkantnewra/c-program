#include <stdio.h>

int main() //return type

{
    // write your code here
    int first_number, second_number; 
    printf("Enter 2 values \n");
    scanf("%d",&first_number);
    scanf("%d",&second_number);
    
    int sum_val = first_number + second_number;
    printf("The addition of %d and %d is %d",first_number,second_number,sum_val); //print formate
    return 0;
}
