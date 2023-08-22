#include <unistd.h>

void rotone(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            *str = (*str + 1 - 'a') % 26 + 'a';
        if (*str >= 'A' && *str <= 'Z')
            *str = (*str + 1 - 'A') % 26 + 'A';
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);
    write(1, "\n", 1);
    return (0);
}