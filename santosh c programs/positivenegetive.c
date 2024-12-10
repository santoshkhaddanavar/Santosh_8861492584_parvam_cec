#include<stdio.h>
void main()
{
    int number = 0;
    printf("Enter a number:");
    scanf("%d",&number);
    if(number > 0)
    {
        printf("%d is a positive number",number);
    }
     else
    {
            printf("%d is negetive number",number);
    }

    
}