#include<stdio.h>

int acceptNum();


int main()
{
    int s1,s2,s3,s4,s5,tm;

    s1 = acceptNum();
    s2 = acceptNum();
    s3 = acceptNum();
    s4 = acceptNum();
    s5 = acceptNum();
    tm = s1+s2+s3+s4+s5;

    if(tm>=90)
        printf("Grade: Ex");
    
    else if(tm<90 && tm>=80)
        printf("Grade: A");
    
    else if(tm<80 && tm>=70)
        printf("Grade: B");
    
    else if(tm<70 && tm>=60)
        printf("Grade: C");
    
    else 
        printf("Grade: F");
    

    return 0;
}

int acceptNum()
{
    int n;
    printf("Enter the marks of subject: ");
    scanf("%d",&n);
    if(n>20)
    {
        printf("Marks cant be greater than 20\n");
        return acceptNum();
    }
    return n;
}