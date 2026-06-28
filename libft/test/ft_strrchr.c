/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raimunda <raimunda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 19:55:36 by raimunda          #+#    #+#             */
/*   Updated: 2026/06/28 17:02:19 by raimunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char    *str;
	char    *p;

	str = "banana";
	
	p = ft_strrchr(str, 'a');
	
	if (p)
    	{
        	printf("%c\n", *p);
    	}
   	else
        	printf("Nao encontrado\n");

	return (0);
}
*/
