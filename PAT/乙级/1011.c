#include <stdio.h>
#include <stdlib.h>


int main(){
   int n,i;
   long long A,B,C;//题目数值范围的原因不能用int或long
   int s[11];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%lld%lld%lld",&A,&B,&C);
       if(A+B>C)
       {
           s[i]=1;
       }
       else
       {
           s[i]=0;
       }
   }
   for(i=0;i<n;i++)
   {
       if(s[i]==1)
       {
            printf("Case #%d: true\n",i+1);
       }
       else
       {
            printf("Case #%d: false\n",i+1);
       }
       
      
   }  

   return 0;
}
