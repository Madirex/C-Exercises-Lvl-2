#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc > 1)
    {
        char c = argv[1][i];
        while (c)
        {
            if (c >= 'A' && c <= 'Z')
            {
                write(1, "_", 1);
                c = c + 32;
            }
            write(1, &c, 1);
            i++;
            c = argv[1][i];
        }
    }

    write (1, "\n", 1);
    return (1);
}