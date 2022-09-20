#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{int W,X,Y,Z;
	scanf("%d %d %d %d", &W, &X,&Y, &Z);
	int final= W + ((X-Y)*Z);
	printf("%d \n",final);
	}
	return 0;
}

