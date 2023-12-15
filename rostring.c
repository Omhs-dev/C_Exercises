#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_space(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}

void print_first_word(char *str, int s_b)\
{
    while (str[s_b] && !is_space(str[s_b]))
    {
        ft_putchar(str[s_b]);
        s_b++;
    }
}

void rostring(char *str)
{
    int s_b;
    int i;
    
    s_b = 0;
    while (str[s_b] && is_space(str[s_b]))
        s_b++;
    i = s_b;
    while (str[i] && !is_space(str[i]))
        i++;
    while (str[i])
    {
        if (str[i] && !is_space(str[i]) && is_space(str[i - 1]))
        {
            while (str[i] && !is_space(str[i]))
            {
                ft_putchar(str[i]);
                i++;
            }
            ft_putchar(' ');
        }
        i++;
    }
    print_first_word(str, s_b);
}

int main(int argc, char **argv)
{
    if (argc > 1)
        rostring(argv[1]);
    ft_putchar('\n');
    return (0);
}
