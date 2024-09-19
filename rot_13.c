#include <stdio.h>
char *rot_13(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'n')
        {
            str[i] += 13;
        }
        else if(str[i] >= 'm' &&str[i] <= 'z')
        {
            str[i] -= 13;
        }
        i++;
    }
    return (str);
}
int main()
{
    char o[] = "abcmez";
    printf("%s",rot_13(o));
}