#include <unistd.h>
char *repet(char *str)
{
    int i = 0;
    int rep = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            rep += str[i] - 'a' + 1;
        }
        while(rep != 0)
        {
            write(1, &str[i], 1);
            rep--;
        }
        i++;
    }
    return (str);
}
int main()
{
    char o[] = "abcd";
    //printf("%s",repet(o));
    repet(o);

}