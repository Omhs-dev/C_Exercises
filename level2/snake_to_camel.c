#include <unistd.h>

void sn_to_c(char *str)
{
    while (*str)
    {
        if (*str == '_')
        {
            str++;
            *str = *str - 32;
        }
        write(1, str, 1);
        str++;
    }
}


int main(int argc, char **argv)
{
    if (argc == 2)
        sn_to_c(argv[1]);
    write(1, "\n", 1);
}
