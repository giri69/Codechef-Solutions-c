#include <stdio.h>
#include<string.h>
int main(void) {
int t;
scanf("%d",&t);
while(t--)
{
    int n;
    scanf("%d",&n);
    char a[n];
    int c=0;
    scanf("%s", a);
    for(int i=0;i<n;i++)
    {
        if(a[i]=='0')
         c++;
    }
       if(c>30) 
	    printf("NO\n");
	    else 
	    printf("YES\n");
}
	return 0;
}

