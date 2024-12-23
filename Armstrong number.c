//Armstrong number or not
#include<stdio.h>
int main() 
{
    int n1,n2,rem, arm=0;
    printf("enter n2 value:\n");
    scanf("%d", &n2);
    n1=n2;
    while(n1>0)
    {
        rem=n1%10;
        arm=arm+(rem*rem*rem);
        n1=n1/10;
    }
    if(n2==arm)
    {
        printf("%d is Armstrong number",n2);
    }
    else
    {
        printf("%d is not Armstrong number",n2);
    }
    return 0;
}
