#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (s1 - s2);
}

int	main()
{
    char str[] = "hellom";
    char str1[] = "helloman";
    int val = ft_strcmp(str1, str);
    printf("%d\n", val);
    // printf("%d\n", val1);
    return 0;
}