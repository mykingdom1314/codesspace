#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char ch;
   int a,i,sum =0;
   int s[4];  //10��100�η�֮�����Ϊ��λ��
   int count =0;
   char table[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
   while((ch=getchar()) != '\n')
   {
       sum=sum + (ch -'0');

   }
   int temp =sum;
   while(temp!=0)
   {
       temp =temp /10;
       count++;
   }


   for(i=count-1;i>=0;i--)
   {
       s[i]=sum%10;
       sum=sum/10;

   }

   for(i=0;i<count;i++)
   {
       printf("%s",table[s[i]]);
       if(i!=count-1)
       {
           printf(" ");
       }
   }
    return 0;
}
