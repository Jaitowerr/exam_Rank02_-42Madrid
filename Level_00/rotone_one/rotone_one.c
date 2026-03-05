#include <unistd.h>

void rotone(char *src)
{
    int i;
    char    letter;

    i = 0;
    while (src[i] != '\0')
    {
        letter = src[i];
        if (src[i] == 'z')
            write(1, "a", 1);
        else if (src[i] == 'Z')
            write(1, "A", 1);
        else if ((src[i] >= 'a' && src[i] <= 'y') || (src[i] >= 'A' && src[i] <= 'Y'))
        {
            letter += 1;
            write(1, &letter, 1);
        } else
            write(1, &letter, 1);
        i++;
    }
}



int main(int argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);

    write(1, "\n", 1);
    return (0);
}