#include <stdio.h>

int main(void) {
    int T,R1,R2,R3,R4;
    scanf("%d",&T);
  
    while(T--)
    {  scanf("%d %d %d %d",&R1,&R2,&R3,&R4);
        if((R1==0) && (R2==0) && (R3==0) && (R4==0))
{printf("IN");
printf("\n");}
else {printf("OUT");
printf("\n");}
}
// your code goes here
	return 0;
}

