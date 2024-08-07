//10.WAP to perform Palindrome number using for loop and function

#include <stdio.h>

int palindrome(int num) 
{
    int rev = 0, temp = num;
    for (; temp != 0; temp /= 10) 
	{
        rev = rev * 10 + temp % 10;
    }
    return (rev == num);
}

 main() 
 {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num)) 
	{
        printf("%d is a palindrome\n", num);
    } else 
	{
        printf("%d is not a palindrome\n", num);
    }

    
}
