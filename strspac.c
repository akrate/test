#include <unistd.h>
void ft_space(char *str)
{
    int i = 0;
    while(str[i])
    { 
        if(str[i] == ' ')
            i++;
        write(1, &str[i],1);
        if(str[i + 1] != '\0'){
            write(1, ", ",3);
        }
       
            
        i++;
    }
}
int main()
{
    char r[] = "hello   world!";
    ft_space(r);
}