#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char *str)
{
    int i = 0;
    int f = 0;
    int count = 0;
    char **b;
    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            f = 0;
        }
        else if (f == 0){
            f = 1;
            count++;
        }
        i++;
    }
    i = i - f;
    b = malloc((count + 1) * sizeof(char));
    b[i+1] = NULL;

    if (b == NULL)
    {
    printf("Inside null ");

    }
    b[0] = "a";
    b[9] = "a";

    // [[Hello],[its'],[world],[Hello],[its'],[world]]
    printf("==> %s\n",  b[9]);
    return b;
}

int main()
{
    char **tab2d;
    tab2d = ft_split("Hello World, it's been a while?");
    // int i  = 0;
    // while (i < 3)
    // {
    //     printf("%s\n", tab2d[i]);
    //     i++;
    // }
    return 0;
}