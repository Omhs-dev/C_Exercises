#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int signe = 1;
    
    while (*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
        signe = -1;
    if (*str == '+' || *str == '-')
        str++;
    int opr = 0;
    while (*str >= '0' && *str <= '9')
    {
        opr = opr * 10 + *str - '0';
        str++;
    }
    return (signe * opr);
}

int	main()
{
    char str[] = "er584526";
    char str1[] = "584526900";
    int val = ft_atoi(str);
    int val1 = ft_atoi(str1);
    printf("%d\n", val);
    printf("%d\n", val1);
    return 0;
}