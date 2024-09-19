#include <stdio.h>
int ft_max(int *tab , int len)
{
    int i = 0;
    int max = tab[0];
    while(i < len)
    {
        if (max < tab[i])
        max = tab[i];
        i++;
    }
    return max;
}
int main()
{
    int a[] = {12,23,34,56,78,2};
    printf("%d",ft_max(a,6));
}
