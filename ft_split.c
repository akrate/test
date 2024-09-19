#include <stdio.h>
#include <stdlib.h>
int str_len(char *str)
{
    int i = 0;
     int count = 0;
    while(str[i])
    {
        if (str[i] != ' ' && str[i] != '\t')
            count++;
        i++;
    }
    return (count);
}

int count_word(char *str)
{
    int i;
    int word;
    int count;

    i = 0;
    word = 0;
    count = 0;

    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\t')
            word = 0;
        else if (word == 0)
        {
            count++;
            word = 1;

        }
        i++;
    }
    return (count);
}
char **ft_split(char *str)
{
    int i;
    char *result;
    int count;

    i = 0;
    count = str_len(str);
    result = (char *) malloc(sizeof(char) * (count + 1));
    if (result == NULL)
        return (NULL);
    
    
    return (result);
}



int main()
{
    char c[] = "zainab rsf";
    printf("%d", str_len(c));
}
