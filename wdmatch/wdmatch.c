#include <unistd.h>

void    print_str(char *str)
{
    int i = 0;

    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int wdmatch(char *str, char *check)
{
    int i = 0;
    int c = 0;
    int pass = 0;

    while(str[i])
    {
        pass = 0;
        while(check[c])
        {
            if (str[i] == check[c])
            {
                pass = 1;
                break;
            }
            c++;
        }
        if (pass == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    if (argc == 3 && wdmatch(argv[1], argv[2]) == 1)
        print_str(argv[1]);
    write(1, "\n", 1);
    return (0);
}