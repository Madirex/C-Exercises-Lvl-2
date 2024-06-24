#include <unistd.h>

int is_start_word(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    else
        return (0);
}

int main(int argc, char **argv)
{
    int i = 0;
    int i2 = 0;

    if (argc == 2)
    {
        while(argv[1][i])
        {
            if (is_start_word(argv[1][i]) && argv[1][i + 1] && !is_start_word(argv[1][i + 1]))
                i2 = i + 1;
            i++;
        }
        while(i2 < i && !is_start_word(argv[1][i2]))
        {
            write(1, &argv[1][i2], 1);
            i2++;
        }   
    }
    write(1, "\n", 1);
    return (0);
}