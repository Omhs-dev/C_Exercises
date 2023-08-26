#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void do_op(char *str, char c, char *ptr)
{
    if (c == '+')
        printf("%d", atoi(str) + atoi(ptr));
    if (c == '-')
        printf("%d", atoi(str) - atoi(ptr));
    if (c == '*')
        printf("%d", atoi(str) * atoi(ptr));
    if (c == '/')
        printf("%d", atoi(str) / atoi(ptr));
    if (c == '%')
        printf("%d", atoi(str) % atoi(ptr));
}

int main(int argc, char **argv)
{
    if (argc == 4)
        do_op(argv[1], argv[2][0], argv[3]);
    printf("\n");
}
