#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   char a[100];
   int i=0;
   gets(a);
   int len = strlen(a);
   for(i=len;i>0;i--)
   {
       if(a[i] == ' ')
       {
           printf("%s ",&a[i+1]);
           a[i]='\0';
       }
   }
   printf("%s",&a[i]);


   return 0;
}
