#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc > 1)
    {
        char c = argv[1][i];
        while (c)
        {
            if (c == '_')
            {
                if (!argv[1][i + 1])
                    break;
                i++;
                c = argv[1][i] - 32;
            }
            write(1, &c, 1);
            i++;
            c = argv[1][i];
        }
    }

    write (1, "\n", 1);
    return (1);
}