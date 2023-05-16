#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	if(t<=50 && t>0)
	printf("100\n");
	else if(t>50 && t<=100)
	printf("50\n");
	else 
	printf("0\n");
	return 0;
}
