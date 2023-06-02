#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m,i,j;
	    scanf("%d %d",&n,&m);
	    m=2;
	    int a[n],b[n],r=0,q=0,s=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&b[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            if(a[i]==a[j])
	            {
	                q+=b[j];
	            }
	            
	        }
	        if(r>q || s==0)
	        {
	            r=q;
	            s=1;
	        }
	        q=0;
	    }
	    printf("%d\n",r);
	}
	return 0;
}