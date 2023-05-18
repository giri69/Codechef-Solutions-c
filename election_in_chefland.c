#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z;
	    scanf("%d%d%d",&x,&y,&z);
	    if(x>y && x>z && x>50)
	    printf("A\n");
	    else if(y>x && y>z && y>50)
	    printf("B\n");
	    else if(z>x && z>y && z>50)
	    printf("C\n");
	    else 
	    printf("NOTA\n");
	}
	return 0;
}