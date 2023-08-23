#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = -1;
    int len = 0;
    char temp;
    
    while (str[len])
        len++;
    while (++i < len / 2)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    return (str);
}

int main()
{
    char str[50] = "geeksforgeeks";
 
    printf("The given string is =%s\n", str);
 
    printf("After reversing string is =%s\n", ft_strrev(str));
 
    return 0;
}