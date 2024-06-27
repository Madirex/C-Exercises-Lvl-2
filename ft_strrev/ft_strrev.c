char    *ft_strrev(char *str)
{
    int     i = 0;
    int     u = 0;
    char    tmp;

    while(str[i])
        i++;
    u = 0;
    while(i > 0 && str[i - 1] && i - 1 - u > 0)
    {
        tmp = str[i - 1];
        str[i - 1] = str[u];
        str[u] = tmp;
        i--;
        u++;
    }

    return (str);
}