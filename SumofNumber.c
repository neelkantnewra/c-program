#include<stdio.h>
void main(){
    int num_1,num_2,Answer;
    printf("Sum of two Number\n");
    printf("Enter First Number: ");
    scanf("%d",&num_1);
    printf("Enter Second Number: ");
    scanf("%d",&num_2);
    Answer = num_1 + num_2;
    printf("The sum of %d and %d is %d",num_1,num_2,Answer);

}