#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int l,r,d,u;
        scanf("%d %d %d %d",&l,&r,&d,&u);
        if (l==r && r==d && d==u && u==l)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
