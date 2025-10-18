
#include <stdio.h>
#include <string.h>

int n = 0;
int arr[100];

void reverseString2(char *s)
{
    if(*s != '\0')
    {
        reverseString2(s + 1);
        arr[n] = *s;
        n += 1;
    }
    if(n == strlen(s))
    {
        s[strlen(s)] = '\0';
    }
}


int main()
{
    char s[10];
    fgets(s, sizeof(s) + 1, stdin);
    reverseString2(s);

    for(int i = 0; *(arr + i) != '\0'; i++)
    {
        printf("%c",*(arr + i));
    }
    return 0;
}