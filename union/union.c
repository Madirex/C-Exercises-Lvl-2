#include <unistd.h>

int is_repeated(char c, char *mem)
{
    int n = 0;

    while (mem[n])
    {
        if (c == mem[n])
            return (1);
        n++;
    }
    return (0);
}

int    write_no_repeated_chars(char *str, char *mem, int mem_size)
{
    int i = 0;
    while (str[i])
    {
        if (!is_repeated(str[i], mem))
        {
            write(1, &str[i], 1);
            mem[mem_size] = str[i];
            mem_size++;
        }
        i++;
    }
    return (mem_size);
}

int main(int argc, char **argv)
{
    char mem[256] = {0};
    int mem_size = 0;

    if (argc == 3)
    {
        mem_size = write_no_repeated_chars(argv[1], mem, mem_size);
        mem_size = write_no_repeated_chars(argv[2], mem, mem_size);
    }
    write(1, "\n", 1);
    return (0);
}