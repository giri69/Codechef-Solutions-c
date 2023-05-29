#include <stdio.h>

int main(void)
{
    int t, n, y, z, i;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &n, &y);
        z=0;
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            z=(z|(a[i]));
        }
        if((z&y)==z)
        {
            int x=(z^y);
            printf("%d\n", x);
        }
        else
        {
            printf("-1\n");
        }
    }
	return 0;
}
