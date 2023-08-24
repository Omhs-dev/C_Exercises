#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i = 0;
    
    while (str[i])
        i++;
    return (i);
}

char *ft_strcpy(char *dst, char *src)
{
    while (*src)
    {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
    return (dst);
}

char    *ft_strdup(char *src)
{
    int len = 0;
    char *dup;
    
    len = ft_strlen(src);
    dup = (char *)malloc(sizeof(char) * len + 1);
    if (!dup)
        return (NULL);
    ft_strcpy(dup, src);
    return(dup);
}

int main()
{
    char source[] = "TestHere";
    char* target = ft_strdup(source);

    printf("%s\n", target);
    return 0;
}
