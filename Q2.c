#include<stdio.h>

int fact();

int main()
{
    int result;
    result = fact();
    printf("Factorial of a number = %d",result);
    return 0;
}

int fact()
{
    int res=1;
    int i,n;
    printf("Enter a number to find factorial :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        res= res*i;
    
    return res;
}