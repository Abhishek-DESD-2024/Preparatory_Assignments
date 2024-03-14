#include<stdio.h>

int main(void)
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("This is a Uppercase Character and the Character is : %c",ch);
    
    else if(ch>='a' && ch<='z')
        printf("This is a lowercase Character and the Character is : %c",ch);
    
    else if(ch>='0' && ch<='9')
        printf("This is a digit and the digit is : %c",ch);
    
    else
        printf("This is a special Character and the Character is : %c",ch);
    

    return 0;
}