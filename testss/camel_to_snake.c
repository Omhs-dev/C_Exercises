#include <unistd.h>

void c_to_sn(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
            write(1, "_", 1);
        }
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        c_to_sn(argv[1]);
    write(1, "\n", 1);
    return (0);
}