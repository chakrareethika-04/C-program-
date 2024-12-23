/ difference 
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,sumeven=0,sumodd=0;
printf("Enter the n value:");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
    if(i%2==0)
    {
    sumeven=sumeven+i;
}
else
{
    sumodd=sumodd+i;
}
}
printf("The difference is %d",abs(sumeven-sumodd));
return 0;
}/ difference 
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,n,sumeven=0,sumodd=0;
printf("Enter the n value:");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
    if(i%2==0)
    {
    sumeven=sumeven+i;
}
else
{
    sumodd=sumodd+i;
}
}
printf("The difference is %d",abs(sumeven-sumodd));
return 0;
}
