#include <stdio.h>

int main(void) {
    int T,N,M,X;
    scanf("%d",&T);
    
    while(T--)
    {scanf("%d %d %d",&N,&M,&X);
    int res=2*(N+M);
    int cost= res * X;
    printf("%d \n",cost);
    }

	// your code goes here
	return 0;
}

