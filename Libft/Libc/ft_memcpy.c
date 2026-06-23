#include <stdio.h>

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	size_t i;
	
	i = 0;
	while (i < n)
	{
		d[i] = s [i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Hello";
	char	dest[10];

	ft_memcpy(dest, src, 6);

	printf("src = %s\n", src);
	printf("dest = %s\n", dest);

	return (0);
}
*/
// dest -> onde serao copiados
// src -> de onde serão copiados
// n -> quantidade de bytes (tipo size_t para armazenar apenas inteiros)
