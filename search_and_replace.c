#include <unistd.h>

void sr_n_rep(char *str, char c, char r)
{
    while (*str)
    {
        if (*str == c)
            *str = r;
        write(1, str, 1);
        str++;
    }   
}

int main(int argc, char **agrv)
{
    // int i = 0;

    if (argc == 4 && !agrv[2][1] && !agrv[3][1])
    {
        sr_n_rep(agrv[1], agrv[2][0], agrv[3][0]);
        // i++;
    }
    write(1, "\n", 1);
    return (0);
}