int	ft_isalnum(char c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_isalnum('\n'));
	return (0);
}
*/
