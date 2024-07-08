size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;

    while(s[i])
    {
        size_t e = 0;
        while(accept[e])
        {
            if (s[i] == accept[e])
                break;
            e++;
        }
        if (!accept[e])
            return (i);
        i++;
    }
    return (i);
}