int	ft_isalpha(char c)
{
	if ((c >= 'A') && (c <= 'Z')
		|| (c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_isalpha('*'));
	return (0);
}
*/
