#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

   int n,m;
   int count=1;
   
   while(scanf("%d%d",&n,&m)==2)
   {
       if(m!=0)
       {
            if(count==1)
            {
                printf("%d %d",m*n,m-1);
                count=0;
            }
            else
            {
                printf(" %d %d",m*n,m-1);
            }
            
       }
       else if (count == 1)
       {
           printf("0 0");
       }
        
       
       
   }

   return 0;
}
