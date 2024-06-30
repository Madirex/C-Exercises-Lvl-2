#include <stdlib.h>

size_t  ft_strlen(char *str)
{
    int len = 0;

    while(str[len])
        len++;
    return (len);
}

char    *ft_strdup(char *src)
{
    int i = 0;
    char *res = malloc((ft_strlen(src) + 1) * sizeof(char));

    if (!res)
        return (NULL);

    while (src[i])
    {
        res[i] = src[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}