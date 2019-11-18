#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,M;
    scanf("%d",&N);
    scanf("%d",&M);
    int a[N];
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int t=M%N;
    for(i=N-t;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<N-t;i++)
    {
        printf("%d",a[i]);
        if(i<N-t-1)
        {
            printf(" ");
        }
    }
    return 0;
}
