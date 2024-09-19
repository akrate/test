#include <stdio.h>
#include <unistd.h>
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}
void wd_match(char *str1, char *str2)
{
    int i;
    int j;
    int count = 0;
    
    i = 0;
    j = 0;
    
    while (str1[i])
    {
        while (str2[j])
        {
            if (str1[i] == str2[j])
            {
                count++;
                break;
            }
            j++;
        }
        i++;
    }
    if (count == ft_strlen(str1))
    {
        write (1, str1, count);
        printf("jjj");
    }
    write (1, "\n", 1);
}
int main(int ac, char **av) {
    if (ac == 3)
    {
        wd_match(av[1], av[2]);
    }

    return 0;
}