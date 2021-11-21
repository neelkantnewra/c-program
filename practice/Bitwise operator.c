// author: Neelkant Newra
// Date: 21 Nov 2021
// https://github.com/neelkantnewra
// https://www.linkedin.com/in/neelkant-newra-158306173/

#include <stdio.h>

int main()
{
    // write your code here
    int result =  25&15;
    printf("%d",result);
    return 0;
    
    /* 
    
    & and operator
    
    25 -> 1 1 0 0 1 
    15 -> 0 1 1 1 1 
    ---------------
    9     0 1 0 0 1
    
    | or operator
    
    25 -> 1 1 0 0 1 
    15 -> 0 1 1 1 1 
    ---------------
    31    1 1 1 1 1 
    
    */
}
