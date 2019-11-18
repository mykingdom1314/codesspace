#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    

    struct stu
    {
        char name[100];

        char id[100];

        int grade;

    } num[n];
    for(i=0; i<n; i++)
    {
        scanf("%s",num[i].name);
        scanf("%s",num[i].id);
        scanf("%d",num[i].grade);

    }
    int max,min;
    int flag1=101;
    int flag2=0;
    for(i=0;i<n;i++)
    {
        if(num[i].grade>flag2)
        {
            flag1=num[i].grade;
            max=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(num[i].grade<flag1)
        {
            flag2=num[i].grade;
            min=i;
        }
    }
    printf("%s %s",num[max].name,num[max].id);
    printf("%s %s",num[min].name,num[min].id);


    return 0;
}
