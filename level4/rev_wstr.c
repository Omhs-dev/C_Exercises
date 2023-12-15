void rev_wstr(char *str)
{
    int i;
    int end;
    int start;
    
    while (str[i])
        i++;
    while (i >= 0 )
    {
        while (str[i] == '\0' || str[i] == ' ' || str[i] == '\t')
            i--;
        end = i;
        while (str[i] && str[i] != ' ' && str[i] != '\t')
            i--;
        start = i + 1;
        int flag;
        flag = start;
        while (start <= end)
        {
            write(1, &str[start], 1);
            start++;
        }
        if (flag != 0)
        {
            write(1, " ", 1);
        }
    }
}
