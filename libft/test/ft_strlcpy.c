/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raimunda <raimunda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 19:54:59 by raimunda          #+#    #+#             */
/*   Updated: 2026/06/28 17:19:42 by raimunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	i++;
	return (i);
}
/*
int	main(void)
{
	char src[] = "hello word";
	char dest[20];
	size_t	ret;

	ret = ft_strlcpy(dest, src, sizeof(dest));

	printf("src = %s\n", src);
	printf("dest = %s\n", dest);
	printf("ret = %zu\n", ret);

	return (0);
}*/
