int ft_toupper(int  c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 32;
        return (c);
}

/*
#include <stdio.h>

int main()
{
    printf("%c\n", ft_toupper('f'));
    return (0);
}
*/