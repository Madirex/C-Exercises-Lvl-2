int    ft_strcmp(char *s1, char *s2)
{
    int n = 0;
    while (s1[n] && s2[n] && s1[n] == s2[n])
        n++;
    return (s1[n] - s2[n]);
}