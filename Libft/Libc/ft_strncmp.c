#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;

	while (i < 0)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[1] - (unsigned char)s2[i]);

		if (s1[1] == '\0')
			return (0);
		
		i++;
	}
	return (0);
}	
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("casa", "casa", 4));

	return (0);
}
*/
// Comparar duas strings até no máximo n caracteres e dizer qual é maior, menor ou igual.
