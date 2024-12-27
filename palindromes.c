/palindrome number or not
#include<stdio.h>
int main()
{
    int n1,n2,rev=0,rem;
    printf("enter n2 value:\n ");
    scanf("%d",&n2);
    n1=n2;
    while(n1>0)
    {
        rem=n1%10;
        rev=rev*10+rem;
        n1=n1/10;
    }
    if(n2==rev)
    {
        printf("%d is a palindrome",n2);
    }
    else
    {
        printf("%d is not a palindrome ",n2);
    }
    return 0;
}
