#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    int i,j=1;
    char s[40]= {0};
    int num[10];
    scanf("%d",&n);
    int a=0,b=0,c=0;
    if(n/100 != 0)
    {
        a=n/100;
        b=n/10%10;
        c=n%10;
    }
    //printf("%d,%d,%d\n",a,b,c);
    if(a==0 && n/10 != 0)
    {
        b=n/10;
        c=n%10;
    }
    if(a==0 && b==0)
    {
        c=n;
    }
    //printf("%d,%d,%d\n",a,b,c);
    for(i=0; i<a; i++)
    {
        s[i]='B';
    }
    for(i=a; i<b+a; i++)
    {
        s[i]='S';
    }

    //printf("cArrµÄ³¤¶È=%d\n", sizeof(s));
    printf("%s",s);
    for(i=0; i<c; i++)
    {

        printf("%d",j);
        j++;

    }

    return 0;
}
