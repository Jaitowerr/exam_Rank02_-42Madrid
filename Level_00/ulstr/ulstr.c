#include <unistd.h>

void ulstr(char *str)
{
    int     i;
    char    letter;

    i = 0;
    while (str[i] != '\0')
    {
        letter = str[i];
        if (str[i] >= 'a' && str[i] <= 'z')
            letter -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            letter += 32;
        write(1, &letter, 1);
        i++;
    }
}


int main(int argc, char **argv)
{
    if (argc == 2)
        ulstr(argv[1]);

    write(1, "\n", 1);
    return (0);
}