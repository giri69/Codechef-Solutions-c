#include <stdio.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int b[101]={0};
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        b[a[i]]++;
	    }
	    int max=0;
	    for(int i=1;i<101;i++)
	    {
	        if(b[i]>max)
	        {
	            max=b[i];
	        }
	    }
	    printf("%d\n",n-max);
	}
	return 0;
}