#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int N,i,j,a=0,count=0,temp=0;
    scanf("%d",&N);
    int flag=1;
    int sum[10000];
    for(i=3; i<=N; i=i+2)
    {
        flag=1;
        int k = sqrt((double)i);//第三次修改
        for(j=3; j<=k; j=j+2)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {

            if(i-temp==2)
            {
                count++;
            }
            temp=i;
        }

    }
    printf("%d",count);
    return 0;
}
