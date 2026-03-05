#include <unistd.h>

int ft_strlen(char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
        i++;

    return (i);
}

void search_and_replace(char *str, char search, char remplace)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == search)
            write(1, &remplace, 1);
        else
            write(1, &str[i], 1);
        i++;
    }

}



int main(int argc, char **argv)
{
    if (argc == 4)
        if (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
            search_and_replace(argv[1], argv[2][0], argv[3][0]);

    write(1, "\n", 1);
    return (0);
}