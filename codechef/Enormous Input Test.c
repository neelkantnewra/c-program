// author: Neelkant Newra
// Date: 22 Nov 2021
// https://github.com/neelkantnewra
// https://www.linkedin.com/in/neelkant-newra-158306173/

#include <stdio.h> 
int main() {
	// declare n,k for input
	int n,k,ans=0,i;
	
	scanf("%d %d",&n,&k);
	for (i=0;i<n;i++){
	    int var;
	    scanf("%d",&var);
	    if (var%k == 0){
	        ans+=1;
	    }
	}
	printf("%d",ans);
	
	return 0;
}
