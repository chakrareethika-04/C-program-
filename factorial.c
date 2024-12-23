//factorial of a number 
#include<stdio.h>
int main() 
{
   int n, i;
   long int res=1;
   scanf("%d", &n) ;
   for(i=2;i<=n;++i)
   {
       res=res*i;
   }
   printf("%d",res);
   return 0;
}
