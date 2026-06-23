#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
int main(void)
{
	char	a;

	a = ft_toupper('a');
	printf("%c\n", a);

	return (0);
}
*/
