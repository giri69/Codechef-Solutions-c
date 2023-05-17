#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d", &t);
	while(t--) {
	    int n, x=7, y=0;
	    scanf("%d", &n);
	    int a[n];
	    for(int i=0;i<n;i++) {
	        scanf("%d", &a[i]);
	    }
	     for(int i=0;i<n;i++) {
	        if(a[i]==1 ||a[i]==2 ||a[i]==3 ||a[i]==4 ||a[i]==5 ||a[i]==6 ||a[i]==7) {
	            x--;
	        }
	        y++;
	        if(x==0)
	            break;
	    }
	    printf("%d\n", y);
	}
	return 0;
}

