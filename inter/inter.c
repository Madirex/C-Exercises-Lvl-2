#include <unistd.h>

int str_contains(char *str, char search)
{
    int i = 0;

    while(str[i])
    {
        if (str[i] == search)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int             i = 0;
    int             j = 0;
    char            printed[256] = {0};
    unsigned int    p_len = 0;
    if (argc == 3)
    {
        while (argv[1][i])
        {
            j = 0;
            while(argv[2][j])
            {
                if (argv[1][i] == argv[2][j])
                    if (!str_contains(printed, argv[1][i]))
                    {
                        write(1, &argv[1][i], 1);
                        printed[p_len] = argv[1][i];
                        p_len++;
                    }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}