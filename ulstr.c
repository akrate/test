#include <stdio.h>
char *ft_ulstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}
int main()
{
    char c[] = "zAiN,.l,a42b";
    printf("%s", ft_ulstr(c));
}