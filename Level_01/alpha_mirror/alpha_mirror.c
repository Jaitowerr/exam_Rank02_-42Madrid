#include <unistd.h>

void alpha_mirror(char *str)
{
    int i;
    char letter;

    i = 0;
    while (str[i] != '\0')
    {
        letter = str[i];
        if (str[i] >= 'a' && str[i] <= 'z')
            letter = 'z' - (str[i] - 'a');
        else if (str[i] >= 'A' && str[i] <= 'Z')
            letter = 'Z' - (str[i] - 'A');
        write(1, &letter, 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        alpha_mirror(argv[1]);
    write(1, "\n", 1);
    return (0);
}