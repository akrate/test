#include <stdlib.h>
#include <stdio.h>
int countlen(int n)
{
    int i;
    i = 0;
    if (n == 0)
    {
      return 1;
    }
   if (n < 0)
    i++;
    while(n != 0)
    {
        n = n / 10;
        i++;
    }
    return (i);
}
char *itoa(int n)
{
    char *rest;
    int k;

    long j = n;

    
   k = countlen(j);

    rest = (char *)malloc(sizeof(char) * k + 1);
    rest[k--] = '\0';
    if(j == 0)
    {
        rest[k] = '0';
    }
    if(j < 0)
    {
        rest[0] = '-';
        j *= -1;
    }
    while ( j != 0)
    {
        rest[k] = (j % 10) + '0';
        j = j / 10;
        k--; 
    }
    return (rest);
}
int main()
{
    int i = -1;
    printf("%s", itoa(i));
}