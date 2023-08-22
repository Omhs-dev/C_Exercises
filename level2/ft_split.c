#include <stdio.h>
#include <stdlib.h>

int count_word(char *str, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        while (str[i] == c)
            i++;
        if (str[i])
            count++;
        while (str[i] && str[i] != c)
            i++;
    }
    return (count);
}

char *get_word(char *str, size_t n)
{
    size_t i;
    char *ptr;

    ptr = malloc(sizeof(char) * n + 1);
    while (str[i] && i < n)
    {
        ptr[i] = str[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

char **ft_split(char *str, char c)
{
    int i;
    int j;
    int k;
    char **mem;

    i = 0;
    mem = malloc(sizeof(char *) * count_word(str, c) + 1);
    if (!mem)
        return (NULL);
    while (str[i])
    {
        while (str[i] == c)
            i++;
        j = i;
        while (str[i] && str[i] != c)
            i++;
        if (i > j)
        {
            mem[k] = get_word(str + j, i - j);
            k++;
        }
    }
    str[k] = '\0';
    return (mem);
}

int		main(void)
{
	int i = 0;
	char **tab;
		
	tab = ft_split("bonjour je m'appel Arthur", ' ');
	printf("string %d : %s\n", i, *tab);
	return (0);
}