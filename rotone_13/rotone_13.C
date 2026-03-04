
#include <unistd.h>
#include <stdlib.h>

void    print_hex(unsigned int n)
{
    char    hex_digits[] = "0123456789abcdef";
    char    buffer[8]; // Un int tiene hasta 8 dígitos hexadecimales
    int     i = 8;

    if (n == 0)
    {
        write(1, "0", 1);
        return ;
    }

    while (n > 0)
    {
        buffer[--i] = hex_digits[n % 16];
        n /= 16;
    }
    // Escribir desde buffer[i] hasta el final
    write(1, &buffer[i], 8 - i);
}

int main(int argc, char **argv)
{
    unsigned int n;

    if (argc == 2)
    {
        n = (unsigned int)atoi(argv[1]);
        print_hex(n);
    }
    write(1, "\n", 1);
    return (0);
}