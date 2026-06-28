/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaomi-i <inaomi-i@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 19:44:23 by inaomi-i          #+#    #+#             */
/*   Updated: 2026/06/26 16:35:57 by inaomi-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	find_c;
	size_t			i;

	ptr = (unsigned char *) s;
	find_c = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == find_c)
			return ((void *) & ptr[i]);
		i++;
	}
	return (NULL);
}
