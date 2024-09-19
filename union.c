#include <unistd.h>
int ft_strcmp(char *s1, char c, int pos)
{
    int i = 0;
    while(i < pos)
    {
        if(s1[i] == c)
        return 1;
        i++;
    }
    return 0;
}
int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    if(ac == 3)
    {
        while (av[1][i] != '\0')
        {
            if(ft_strcmp(av[1], av[1][i], i) == 0)
                write(1, &av[1][i], 1);
            i++;
        }
        while(av[2][j] != '\0')
        {
            if(ft_strcmp(av[2], av[2][j], j) == 0 && ft_strcmp(av[1], av[2][j], i) == 0)
                write(1, &av[2][j], 1);
            j++;
        }
    }
}