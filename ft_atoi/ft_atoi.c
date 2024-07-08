int	ft_atoi(const char *str)
{
    int i = 0;
    int multipler = 1;
    int num = 0;

    while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            multipler = -1;
        i++;
    }
    while(str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return (num * multipler);
}