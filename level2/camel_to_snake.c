#include <unistd.h>

void c_to_s(char *str)
{
    while (*str)
    {
        // if (*str >= 'a' && *str <= 'z')
        //     *str = 'z' - *str + 'a';
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
        c_to_s(argv[1]);
    write(1, "\n", 1);
}