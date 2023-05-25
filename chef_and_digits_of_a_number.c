#include <stdio.h>
#include <string.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char a[100000],z,c1=0,c2=0;
	    scanf("%s",a);
	    z=strlen(a);
	    for(int i=0;i<z;i++)
	    {
	        if(a[i]=='1')
	          c1++;
	        if(a[i]=='0')
	          c2++;
	    }
	    if(c1==1||c2==1)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

