#include <unistd.h>

void rev_print(char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
        i++;
    while (i-- > 0)
    {
        write(1, &src[i], 1);
    }
}




int main(int argc, char **argv)
{
    if (argc == 2)
        rev_print(argv[1]);

    write(1, "\n", 1);
    return (0);
}