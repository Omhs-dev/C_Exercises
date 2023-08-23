char    *ft_strrev(char *str)
{
    int i = -1;
    int length = 0;
    char temp;
    while (str[length])
        length++;
    while (++i < length / 2)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    return (str);
}

int main()
{
    char str[50] = "geeksforgeeks";
 
    printf("The given string is =%s\n", str);
 
    printf("After reversing string is =%s", strrev(str));
 
    return 0;
}