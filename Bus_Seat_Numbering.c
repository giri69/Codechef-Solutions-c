#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        
    
	int x;
	
	scanf("%d",&x);
	if(x<16)
	{
	    printf("Lower ");
	    if(x<11)
	    printf("Double\n");
	    else
	    printf("Single\n");
	}
	else if(x>15 && x<31)
	{
	    printf("Upper ");
	    if(x<26)
	    printf("Double\n");
	    else 
	    printf("Single\n");
	}}
	return 0;
}

