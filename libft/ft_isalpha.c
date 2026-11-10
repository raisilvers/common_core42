int ft_isalpha(int  c)
{
    if((c >='A'&& c <= 'z') || (c >= 'a' && c <= 'z'))
    {
        return (1);
    }
}

/*

#include <stdio.h>

int ft_isalpha(int c);

int main(void)
{
    printf("%d\n", ft_isalpha('A'));
    
    return (0);
}

*/