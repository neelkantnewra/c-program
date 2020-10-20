//Largest of three number provided by user

#include<stdio.h>

void main(){
    int num_1,num_2,num_3;
    printf("Largest of three given Number\n");
    printf("Enter First number: ");
    scanf("%d",&num_1);
    printf("Enter Second number: ");
    scanf("%d",&num_2);
    printf("Enter Third number: ");
    scanf("%d",&num_3);

    //Algorithm to be use
    if(num_1>num_2){
        if(num_1>num_3){
            printf("Number %d is greater than %d and %d .",num_1,num_2,num_3);
        }
        else
        {
            printf("Number %d is greater than %d and %d .",num_3,num_1,num_2);
        }
        
    }
    else
    {
      if(num_2>num_3){
          printf("Number %d is greater than %d and %d .",num_2,num_1,num_3);
      }
      else
      {
          printf("Number %d is greater than %d and %d .",num_3,num_1,num_2);
      }
    }
}