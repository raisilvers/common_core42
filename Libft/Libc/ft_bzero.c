#include <stddef.h>
//#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *p;
	size_t	i;

	p = (unsigned char *)s;
	i = 0;

	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char str[6] = "Hello"; //Criando um array de caracteres de 6 bytes
	unsigned char	i; //Variavel que so aceita numeros possitivos;

	printf("Antes: %s\n", str);

	ft_bzero(str, 2);

	i = 0;
	while (i < 6)
	{
		printf("%d ",str[i]);
		i++;
	}
	printf("Depois: %s\n", str);

	return (0);
}
*/