char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int n = 0;

    if (!s1 || !s2)
        return (NULL);
    while(s1[i])
    {
        n = 0;
        while(s2[n])
        {
            if (s2[n] == s1[i])
                return (char *) &s1[i];
            n++;
        }
        i++;
    }
    return (NULL);
}