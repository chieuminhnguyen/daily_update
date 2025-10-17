#include <stdio.h>

void reverseString2(char *s)
{
    if(*s != '\0')
    {
        reverseString2(s+1);
        printf("%c",*s);
    }
}

void reverseString1(char *s)
{
    // Initialize count variable
    int cout = 0;
    
    // Calculate the length of string
    for(int i = 0; *(s+i) != '\0'; i++)
    {
        cout += 1;
    }
    
    // Iterate and print from last element to first element
    for(int i = cout; i >= 0; i--)
    {
        printf("%c",*(s + i));
    }
    
}


int main()
{
    char s[1000];
    scanf("%s", s);
    reverseString1(s);
    // reverseString2(s);
    return 0;
}


