#include <stdio.h>
#include<string.h>
int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char s[100001];
	    scanf("%s",s);
	    int n,m=0,x=0;
	    n=strlen(s);
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='(')
	           m=m+1;
	        
	        else if(s[i]==')')
	           m=m-1;
	        
	        if(m>=x)
     	      x=m;
     	}
     	
     	for(int i=0;i<x;i++)
     	printf("(");
     	
     	for(int i=0;i<x;i++)
     	printf(")");
     	
     	printf("\n");
	}	
     
	return 0;
}