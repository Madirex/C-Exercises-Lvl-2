#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{

    if (argc == 4)
    {
        int op1 = atoi(argv[1]);
        int op2 = atoi(argv[3]);
        char sign = argv[2][0];

        if (sign == '+')
            printf("%d", op1 + op2);
        else if (sign == '-')
            printf("%d", op1 - op2);
        else if (sign == '*')
            printf("%d", op1 * op2);
        else if (sign == '/')
            printf("%d", op1 / op2);
        else if (sign == '%')
            printf("%d", op1 % op2);
    }
    printf("\n");
    return (0);
}