// author: Neelkant Newra
// Date: 22 Nov 2021
// https://github.com/neelkantnewra
// https://www.linkedin.com/in/neelkant-newra-158306173/

#include <stdio.h> 

int main() {
    // read the number of testcase
    int t;
    scanf("%d",&t);
    int i;
    for (i=1;i<=t;i++){
        int num_1,num_2,ans;
        scanf("%d %d",&num_1,&num_2);
        ans = num_1 + num_2;
        printf("%d \n",ans);
    }
	return 0;
}
