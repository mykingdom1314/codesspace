#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    char a[n][100];
    for(i=0;i<n-1;i++)
    {
        scanf("%s\n",a[i]);
    }
    printf("--------------");
    printf("%s",a[1]);
    for(i=0;i<n;i++)
    {
        for(j=0;j!='\0';j++)
        {
            if(a[1][j]!='P'&& a[1][j]!='A' && a[1][j]!='T')
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
    }
    return 0;
}
