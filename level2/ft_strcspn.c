#include <stdlib.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;
    
    while (s[i] != '\0')
    {
        j = 0;
        while (reject[i] != '\0')
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

int	main()
{
    char str[] = "hellom";
    char str1[] = "helloman";
    int val = ft_strcspn(str1, str);
    printf("%d\n", val);
    // printf("%d\n", val1);
    return 0;
}